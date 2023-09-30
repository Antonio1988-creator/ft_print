/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:38:50 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/30 13:58:57 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// Funciones auxiliares para analizar el formato

void parse_flags(const char **format, t_flags *flags)
{
    // Implementa la lógica para analizar las banderas (por ejemplo, '-', '0', etc.)
}

void parse_width(const char **format, t_flags *flags, va_list args)
{
    // Implementa la lógica para analizar el ancho de campo (por ejemplo, %10d)
}

void parse_precision(const char **format, t_flags *flags, va_list args)
{
    // Implementa la lógica para analizar la precisión (por ejemplo, %.2f)
}

void parse_length(const char **format, t_flags *flags)
{
    // Implementa la lógica para analizar la longitud (por ejemplo, %lld)
}
