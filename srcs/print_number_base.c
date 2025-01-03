/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:28:47 by doberes           #+#    #+#             */
/*   Updated: 2024/12/22 22:35:34 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// --------------------------- print_number_base ------------------------------
// ============================================================================


int	print_number_base(unsigned int nbr, const char *symbols, int base)
{
	int	count;

	count = 0;
	if (nbr < (unsigned int)base)
		count += print_char(symbols[nbr]);
	else
	{
		count += print_number_base(nbr / base, symbols, base);
		count += print_number_base(nbr % base, symbols, base);
	}
	return (count);
}
