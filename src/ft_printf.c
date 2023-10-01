/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 08:11:56 by anguil-l          #+#    #+#             */
/*   Updated: 2023/10/01 08:23:07 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_pf(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (write(1, str, len));
}

void	ft_putnbr_pf(int n)
{
	if (n == -2147483648)
	{
		ft_putstr_pf("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar_pf('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_pf(n / 10);
	ft_putchar_pf(n % 10 + '0');
}

void	ft_putuint_pf(unsigned int n)
{
	if (n >= 10)
		ft_putuint_pf(n / 10);
	ft_putchar_pf(n % 10 + '0');
}

void	ft_puthex_pf(unsigned int n, int uppercase)
{
	char	*hex_chars;
	char	hex[8];
	int		i;

	hex_chars = "0123456789abcdef";
	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	i = 0;
	while (n > 0)
	{
		hex[i] = hex_chars[n % 16];
		n /= 16;
		i++;
	}
	while (i < 8)
	{
		hex[i] = '0';
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_pf(hex[i]);
	}
}

void	ft_format(va_list va, const char **format, int *counter)
{
	const char	*str;

	str = *format;
	str++;
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int));
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *));
	else if (*str == 'p')
	{
		ft_putstr_pf("0x");
		ft_puthex_pf((unsigned int)va_arg(va, void *), 0);
	}
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_pf(va_arg(va, int));
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int));
	else if (*str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), 0);
	else if (*str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), 1);
	else if (*str == '%')
		ft_putchar_pf('%');
	(*counter)++;
	*format = str + 1;
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	int		counter;

	counter = 0;
	if (!format)
		return (0);
	va_start(va, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(va, &format, &counter);
		}
		else
		{
			ft_putchar_pf(*format);
			counter++;
		}
		format++;
	}
	va_end(va);
	return (counter);
}
