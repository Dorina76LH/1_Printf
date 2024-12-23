/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:00:58 by doberes           #+#    #+#             */
/*   Updated: 2024/12/23 15:36:49 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror -Iincludes main.c -L. -lftprintf -o test
// -Include : ou trouver les fichiers .h
// -L : repertoire ou se trouve le fichier libftprintf.a
// -lftprintf : lie la bibliotheque libftprintf.a au programme
// -o test : nomme le fichier executable test
// ./test : executer le test
// main fonction => compare ft_printf and printf fonctions

#include "ft_printf.h"

int	main(void)
{
	int		count;
	int		x;
	void	*ptr;

	x = 42;
	ptr = &x;
	count = 0;
	// -------- test %c --------
	printf("\n\n---- Test char ----\n");
	count = ft_printf("ft_printf >> %c | ", 'A');
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %c | ", 'A');
	printf("Printed chars : %d\n", count);
	//
	// -------- test %s --------
	printf("\n\n---- Test string ----\n");
	count = ft_printf("ft_printf >> Hello %s ! | ", "World");
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> Hello %s ! | ", "World");
	printf("Printed chars : %d\n", count);
	//
	// -------- test %d --------
	printf("\n\n---- Test %%d ----\n");
	count = ft_printf("ft_printf >> %d | ", 0);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %d | ", 0);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %d | ", 42);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %d | ", 42);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %d | ", 2147483647);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %d | ", 2147483647);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %d | ", -7000);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %d | ", -7000);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %d | ", -2147483648);
	ft_printf("Printed chars : %d\n", count);
	//count = printf("   printf >> %d | ", -2147483648);
	//printf("Printed chars : %d\n", count);
	//
	// -------- test %% --------
	printf("\n\n---- Test %% ----\n");
	count = ft_printf("ft_printf >> %% test | ");
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %% test | ");
	printf("Printed chars : %d\n", count);
	//
	// -------- test hexa lower --------
	printf("\n\n---- Test hexa lower ----\n");
	count = ft_printf("ft_printf >> %x | ", -2400);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %x | ", -2400);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %x | ", -1);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %x | ", -1);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %x | ", 0);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %x | ", 0);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %x | ", 42);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %x | ", 42);
	printf("Printed chars : %d\n", count);
	//
	// -------- test hexa upper --------
	printf("\n\n---- Test hexa upper ----\n");
	count = ft_printf("ft_printf >> %X | ", -2400);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %X | ", -2400);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %X | ", -1);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %X | ", -1);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %X | ", 0);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %X | ", 0);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %X | ", 42);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %X | ", 42);
	printf("Printed chars : %d\n", count);
	//
	// -------- test pointer --------
	printf("\n\n---- Test pointer ----\n");
	count = ft_printf("ft_printf >> %p | ", NULL);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %p | ", NULL);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %p | ", ptr);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %p | ", ptr);
	printf("Printed chars : %d\n", count);
	//
	// -------- test %u --------
	printf("\n\n---- Test %%u ----\n");
	count = ft_printf("ft_printf >> %u | ", 0);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %u | ", 0);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %u | ", 42);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %u | ", 42);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %u | ", 12345);
	ft_printf("Printed chars : %d\n", count);
	count = printf("   printf >> %u | ", 12345);
	printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %u | ", 42949672943);
	ft_printf("Printed chars : %d\n", count);
	// count = printf("   printf >> %u | ", 4294967294);
	// printf("Printed chars : %d\n", count);
	count = ft_printf("ft_printf >> %u | ", 4294967295);
	ft_printf("Printed chars : %d\n", count);
	// count = printf("   printf >> %u | ", 4294967295);
	// printf("Printed chars : %d\n", count);
	return (0);
}
