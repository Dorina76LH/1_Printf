/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberes <doberes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:08:35 by doberes           #+#    #+#             */
/*   Updated: 2024/12/21 17:15:01 by doberes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
gcc -Wall -Werror -Wextra ft_putstr_fd.c
*/

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (ft_strlen(s));
}

// int	main(void)
// {
// 	int		file_descriptor;
// 	char	*character;

// 	file_descriptor = 1;
// 	character = "My girl, my girl, don't lie to me !";
// 	ft_putstr_fd(character, file_descriptor);
// 	return (0);
// }
