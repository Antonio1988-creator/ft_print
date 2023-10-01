/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:11:35 by anguil-l          #+#    #+#             */
/*   Updated: 2023/10/01 09:36:26 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
