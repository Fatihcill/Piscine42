/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_d_arrays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:16:01 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/10 18:11:32 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "unistd.h"
#include "print_utils.h"

char	**two_d_array(char fill, int row, int col)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * row);
	while (i < row)
	{
		arr[i] = (char *)malloc(sizeof(char) * col);
		while (j < col)
		{
			arr[i][j] = fill;
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}

char	**two_d_array_from_str(char *str, int row_col_number)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * row_col_number);
	while (i < row_col_number)
	{
		arr[i] = (char *)malloc(sizeof(char) * row_col_number);
		while (j < row_col_number)
		{
			arr[i][j] = str[i * row_col_number + j];
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}

char	**two_d_array_from_fd(int *fd, int size)
{
	char	**map;
	char	*buffer;
	char	*buffer_addr;
	int		line_count;

	line_count = 0;
	buffer = malloc(sizeof (char) * size * size + size);
	buffer_addr = buffer;
	while (line_count < size)
	{
		read(*fd, buffer_addr, size + 1);
		buffer_addr += size + 1;
		line_count++;
	}
	map = two_d_array_from_str(buffer, size + 1);
	free(buffer);
	return (map);
}

char	**two_d_array_filter_col(char **arr, int row_count, int col_to_filter)
{
	char	**new_arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_arr = (char **)malloc(sizeof(char *) * row_count);
	while (i < row_count)
	{
		new_arr[i] = (char *)malloc(sizeof(char) * row_count);
		while (j < row_count)
		{
			if (j != col_to_filter)
				new_arr[i][j] = arr[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (new_arr);
}

char	**two_d_array_copy(char **src, char **dst, int i, int j)
{
	int	i_count;
	int	j_count;

	i_count = 0;
	j_count = 0;
	while (i_count < i)
	{
		j_count = 0;
		while (j_count < j)
		{
			dst[i_count][j_count] = src[i_count][j_count];
			j_count++;
		}
		i_count++;
	}
	return (dst);
}
