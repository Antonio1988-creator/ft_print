/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:43:14 by anguil-l          #+#    #+#             */
/*   Updated: 2023/10/01 09:25:23 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *str);
void	ft_putnbr_pf(int n);
void	ft_putuint_pf(unsigned int n);
void	ft_puthex_pf(unsigned int n, int uppercase);

#endif
