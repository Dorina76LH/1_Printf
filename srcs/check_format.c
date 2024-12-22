/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:32:40 by doberes           #+#    #+#             */
/*   Updated: 2024/12/22 22:30:54 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// ----------------------------- check_format ---------------------------------
// ============================================================================
// analyse le caractere recu en parametre pour trouver le bon format

int	check_format(char specifier, va_list arg_ptr)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(arg_ptr, int));
	else if (specifier == 's')
		count += print_string(va_arg(arg_ptr, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_number(va_arg(arg_ptr, int));
	else if (specifier == 'x')
		count += print_number_base(va_arg(arg_ptr, unsigned int), "0123456789abcdef",16);
	else if (specifier == 'X')
		count += print_number_base(va_arg(arg_ptr, unsigned int), "0123456789ABCDEF",16);
	else if (specifier == 'b')
		count += print_number_base(va_arg(arg_ptr, unsigned int), "01", 2);
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}
