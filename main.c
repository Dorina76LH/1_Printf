/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:00:58 by doberes           #+#    #+#             */
/*   Updated: 2024/12/21 17:15:42 by doberes          ###   ########.fr       */
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
	// test char
	printf("\n\n---- Test char ----\n");
	ft_printf("A");
	printf("A");
	
	//printf("\n\n---- Test string ----\n")
	//ft_printf("ft_printf : Hello %s !\n", "World");
	//printf("   printf : Test string : Hello %s !\n", "World");
	return(0);
}