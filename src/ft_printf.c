/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 08:11:56 by anguil-l          #+#    #+#             */
/*   Updated: 2023/10/01 09:14:13 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>

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
