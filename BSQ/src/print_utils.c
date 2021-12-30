/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:15:56 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/09 21:15:57 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*io_strcnpy(char *src, char *dest, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*io_strcnpy_filter(char *src, char *dest, unsigned int len, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < len && src[i] != '\0')
	{
		if (src[i] != c)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		else
		{
			i++;
		}
	}
	while (i < len)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

void	io_print_2d_array(char **arr, int item_per_row_col)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < item_per_row_col)
	{
		while (j < item_per_row_col)
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
