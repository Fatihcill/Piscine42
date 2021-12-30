/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:41:07 by fcil              #+#    #+#             */
/*   Updated: 2021/12/15 14:52:58 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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

void	ft_sort_string_tab(char **tab)
{
	int	index;
	int	i;

	i = 0;
	while (tab[i])
	{
		index = 0;
		while (tab[index])
		{
			if (tab[index + 1] && ft_strcmp(tab[index], tab[index + 1]) > 0)
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		i++;
	}
}

/*
int	main()
{
	int	i = 0;
	char *tab[] = {"1", "9", "4", "a", "f", "b", 0};
	while (i < 7)
	{
		printf("tab[%d] <@ %p> = %s\n", i, tab + i, tab[i]);
		i++;
	}
	ft_sort_string_tab(tab);
	printf("\n");
	i = 0;
	while (i < 7)
	{
		printf("tab[%d] <@ %p> = %s\n", i, tab + i, tab[i]);
		i++;
	}
}
*/
