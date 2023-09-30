/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:38:14 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/30 13:58:05 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int printed_chars;

    va_start(args, format);
    printed_chars = 0;

    // Implementa la lógica principal de ft_printf
    // Recorre la cadena de formato, analiza los especificadores y realiza las conversiones.
    
    va_end(args);

    return printed_chars;
}
