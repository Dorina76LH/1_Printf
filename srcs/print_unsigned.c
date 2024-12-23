/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:57:07 by doberes           #+#    #+#             */
/*   Updated: 2024/12/23 14:58:25 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// ----------------------------- print_unsigned -------------------------------
// ============================================================================

int	print_unsigned(unsigned int n)
{
	int			count;
	const char	*symbols;

	count = 0;
	symbols = "0123456789";
	if (n < 10)
		count += print_char(symbols[n]);
	else
	{
		count += print_number(n / 10);
		count += print_number(n % 10);
	}
	return (count);
}
