/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:13:41 by fcil              #+#    #+#             */
/*   Updated: 2021/12/14 20:13:53 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
		if (f(tab[i++]))
			return (1);
	return (0);
}

/*int ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
int main (void)
{
	char *array[] = {"A", "Z", NULL};
	int	i;

	i = 0;
	while ( i < 3)
	{
		printf("%d\n", ft_any(&array[i], ft));
		i++;
	}
}*/
