/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:53:16 by fcil              #+#    #+#             */
/*   Updated: 2021/12/15 15:05:48 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && (*cmp)(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int		main(void)
{
	int	i = 0;
	char *tab[] = {"merhaba", "ben", "fatih", "seni", "sevmek", "<3", 0};

	while (i < 7)
	{
		printf("tab[%d] <@ %p> = %s\n", i, tab + i, tab[i]);
		i++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	i = 0;
	while (i < 7)
	{
		printf("tab[%d] <@ %p> = %s\n", i, tab + i, tab[i]);
		i++;
	}	
}
*/
