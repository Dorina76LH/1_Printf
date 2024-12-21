/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:32:40 by doberes           #+#    #+#             */
/*   Updated: 2024/12/21 14:52:19 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// ----------------------------- check_format ---------------------------------
// ============================================================================
// analyse la chaine de caractere recu en parametre et redirige vers les
// fonctions qui gerent les conversions

int	check_format(const char *format, va_list args)
{
	int	i; // index pour parcourir la chaine
	int	printed_chars; // compteur de caracteres imprimes

	i = 0;
	printed_chars = 0;
	// boucle pour parcourir la chaine
	while (format[i] != '\0')
	{
		// detecter les specificateurs de format
		if (format[i] == '%' && format[i+1] != '\0')
		{
			// Analyse du specificateur
			i++; // pour se positionner apres le '%'
			// gere un caractere
			if (format[i] == 'c')
				printed_chars = printed_chars + print_char(va_arg(args, int));
			// gere le '%'
			else if (format[i] == '%')
				printed_chars = printed_chars + ft_putchar_fd('%', 1);
			// si aucun specificateur valide, rien n'est imprime
		}
		// imprime un caractere normal
		else
		printed_chars = printed_chars +ft_putchar_fd(format[i], 1);
	}
	i++; // passe au caractere suivant
	return (printed_chars);
}
