/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:00:12 by doberes           #+#    #+#             */
/*   Updated: 2024/12/23 13:11:52 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

#include "ft_printf.h"

// ============================================================================
// ------------------------------ print_string --------------------------------
// ============================================================================

// prints a string on the stdout and returns de count of printed chars
// while loop to iterate through the string until reaching the character ‘\0’.

int	print_string(char *str)
{
	int	count;

	if (str == NULL)
		str = "(null)";
	count = 0;
	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
