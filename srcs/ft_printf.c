/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:32:40 by doberes           #+#    #+#             */
/*   Updated: 2024/12/22 22:20:31 by doberes          ###   ########.fr       */
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
// - initialsie va_list
// - affecte le retour de check_format a printed_chars
// - nettoie va_list
// - retourne printed chars

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr; // liste d'arguments
	int		count; // caracteres imprimes

	va_start(arg_ptr, format); // se positionner au premier argument
	count = 0;
	// boucle pour parcourir la chaine
	// tant qu'on ne trouve pa le car de fin de chaine daans format
	while (*format != '\0')
	{
		// si '%' trouve (format specificateur)
		if (*format == '%')
		{
			++format;
			count += check_format(*format, arg_ptr); // appeler check_format avec format incremente
		}
		// si pas de '%' trouve, afficher le carcatere avec write
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(arg_ptr); // nettoyer va_list et free les mallocs
	return (count);
}
