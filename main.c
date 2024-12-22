/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:00:58 by doberes           #+#    #+#             */
/*   Updated: 2024/12/22 22:41:05 by doberes          ###   ########.fr       */
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
	int count;

	count = 0;
	// -------- test char --------
	printf("\n\n---- Test char ----\n");
	// ft_printf
	count = ft_printf("ft_printf >> Simple char test : %c \n", 'A');
	ft_printf("Number of printed chars : %d\n", count);
	// printf
	count = printf("printf    >> Simple char test : %c \n", 'A');
	printf("Number of printed chars : %d\n", count);

	// -------- test string --------
	printf("\n\n---- Test string ----\n");
	// ft_printf
	count = ft_printf("ft_printf >> Simple string test : Hello %s !\n", "World");
	ft_printf("Number of printed chars : %d\n", count);
	// printf
	count = printf("printf    >> Simple string test : Hello %s !\n", "World");
	printf("Number of printed chars : %d\n", count);

	// -------- test %% --------
	printf("\n\n---- Test %% ----\n");
	// ft_printf

	count = ft_printf("ft_printf >> %% test \n");
	ft_printf("Number of printed chars : %d\n", count);
	//printf
	count = printf("printf    >> %% test \n");
	printf("Number of printed chars : %d\n", count);

	// -------- test hexa lower --------
	printf("\n\n---- Test hexa lower ----\n");
	// ft_printf
	count = ft_printf("ft_printf >> %x test \n", -1);
	ft_printf("Number of printed chars : %d\n", count);
	//printf
	count = printf("printf    >> %x test \n", -1);
	printf("Number of printed chars : %d\n", count);

	// -------- test hexa upper --------
	printf("\n\n---- Test hexa upper ----\n");
	// ft_printf
	count = ft_printf("ft_printf >> %X test \n", -1);
	ft_printf("Number of printed chars : %d\n", count);
	//printf
	count = printf("printf    >> %X test \n", -1);
	printf("Number of printed chars : %d\n", count);

	return(0);
}