/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:32:40 by doberes           #+#    #+#             */
/*   Updated: 2024/12/23 12:59:51 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// ------------------------------ ft_printf -----------------------------------
// ============================================================================
// recoit une chaine de caracteres et un nbr varaible d'arguments en parametre
// - count : number of printed chars
// - va_list : initialise va_list
// - va_start : position of first argument
// - loop : call check_format if '%' format specifier found
// - va_end : clean va_list (delete data and free malloc)
// - return : count

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	int		count;

	va_start(arg_ptr, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			count += check_format(*format, arg_ptr);
		}
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(arg_ptr);
	return (count);
}
