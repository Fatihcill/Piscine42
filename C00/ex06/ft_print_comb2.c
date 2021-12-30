/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:54:36 by fcil              #+#    #+#             */
/*   Updated: 2021/11/25 05:10:09 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		nm1;
	int		nm2;

	nm1 = 0;
	while (nm1 < 99)
	{
		nm2 = nm1 + 1;
		while (nm2 < 100)
		{
			ft_putchar((nm1 / 10) + '0');
			ft_putchar((nm1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((nm2 / 10) + '0');
			ft_putchar((nm2 % 10) + '0');
			if (nm1 != 98 || nm2 != 99)
			{
				write(1, ", ", 2);
			}
			nm2++;
		}
		nm1++;
	}
}
