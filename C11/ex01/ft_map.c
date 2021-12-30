/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:42:28 by fcil              #+#    #+#             */
/*   Updated: 2021/12/14 19:47:48 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = malloc(length * sizeof(int));
	if (length < 1 || !ret)
		return (NULL);
	i = -1;
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}

/*
int ft_mul(int a)
{
	return (a * 2);
}
int	main()
{
	const int size = 5;
	int tab[size] = {1, 2, 3, 4, 5};
	int *res;
	int i = 0;
	res = ft_map(tab, size, &ft_mul);
	while(i < size)
	{
		printf("%i", res[i]);
		i++;
	}
}
*/
