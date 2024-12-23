/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:18:29 by doberes           #+#    #+#             */
/*   Updated: 2024/12/23 14:59:07 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ============================================================================
// ------------------------ Create static library -----------------------------
// ============================================================================
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// ============================================================================
// -------------------------------- Macros ------------------------------------
// ============================================================================

// ============================================================================
// -------------------------- Included libraries ------------------------------
// ============================================================================

// printf()
# include <stdio.h>

// va_list, va_arg, va_start, va_copy, va_end
# include <stdarg.h>

// write()
# include <unistd.h>

// malloc(), free(), size_t
# include <stdlib.h>

// ============================================================================
// -------------------------- Included fonctions ------------------------------
// ============================================================================

// ----------------------------- Main fonction --------------------------------
int	ft_printf(const char *format, ...);

// ------------------------ Non-static sub fonctions --------------------------
int	check_format(char specifier, va_list arg_ptr);
int	print_char(int c);
int	print_string(char *str);
int	print_number(long n);
int	print_hex(unsigned long long nbr, const char *symbols);
int	print_pointer(void *ptr);
int	print_unsigned(unsigned int n);

// --------------------------- Utility fonctions ------------------------------
//int			ft_putchar_fd(char c, int fd);
//int			ft_putstr_fd(char *s, int fd);
//size_t		ft_strlen(const char *s);
//int ft_putnbr_fd(int n, int fd);
//int ft_putunbr_fd(unsigned int n, int fd);
//int ft_puthex_fd(unsigned int n, char format, int fd);

#endif