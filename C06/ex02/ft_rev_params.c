/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:10:54 by fcil              #+#    #+#             */
/*   Updated: 2021/12/07 16:10:56 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = argc - 1;
	while (counter > 0)
	{
		while (*argv[counter] != '\0')
			ft_putchar(*argv[counter]++);
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
