/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:32:40 by doberes           #+#    #+#             */
/*   Updated: 2024/12/21 15:21:43 by doberes          ###   ########.fr       */
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

int ft_printf(const char *format, ...)
{
    va_list args; // liste d'arguments
    int     printed_chars; // caracteres imprimes

    va_start(args, format); // se positionner au premier argument
    printed_chars = check_format(format, args); // appeler check_format
    va_end(args); // nettoyer va_list et free les mallocs
    return (printed_chars);
}
