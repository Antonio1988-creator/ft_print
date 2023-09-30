/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:39:21 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/30 15:08:11 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Funciones auxiliares para realizar conversiones

int convert_char(t_flags *flags, va_list args)
{
    char c = va_arg(args, int);
    // Implementa la conversión y escritura en el resultado
    return 1; // Número de caracteres escritos
}

int convert_string(t_flags *flags, va_list args)
{
    char *str = va_arg(args, char *);
    // Implementa la conversión y escritura en el resultado
    return ft_strlen(str); // Número de caracteres escritos
}

int convert_integer(t_flags *flags, va_list args)
{
    int n = va_arg(args, int);
    // Implementa la conversión y escritura en el resultado
    return ft_numlen(n); // Número de caracteres escritos
}

// Otras funciones de conversión para diferentes tipos de datos
