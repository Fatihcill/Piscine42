/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:15:39 by cryonayes         #+#    #+#             */
/*   Updated: 2021/12/16 10:58:59 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq/header_parser.h"
#include "bsq/bsq_solver.h"
#include "print_utils.h"
#include "two_d_arrays.h"
#include "math_utils.h"
#include "stdlib.h"
#include "unistd.h"

void	validate_map(t_header map_h, char **map_o)
{
	int	i;
	int	j;

	i = -1;
	while (++i < map_h.map_size)
	{
		if (map_o[i][map_h.map_size] != '\n')
		{
			write(2, "map error\n", 10);
			exit(-1);
		}
		j = -1;
		while (++j < map_h.map_size)
		{
			if (!(map_o[i][j] == map_h.empty_char
				|| map_o[i][j] == map_h.fill_char
				|| map_o[i][j] == map_h.obstacle_char))
			{
				write(2, "map error\n", 10);
				exit(-1);
			}
		}
	}
}

char	**transform_map(char **map, int size, t_header header)
{
	int		i;
	int		j;
	char	**map_copy;

	i = -1;
	map_copy = two_d_array('\0', size + 1, size + 1);
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if ((i == 0 || j == 0) && map[i][j] == header.empty_char)
			{
				map_copy[i][j] = 1;
			}
			else if (map[i][j] == header.obstacle_char)
				map_copy[i][j] = 0;
			else
				map_copy[i][j] = map[i][j];
		}
	}
	return (map_copy);
}

t_bsq_info	calculate_bsq(char **map, int map_size)
{
	t_bsq_info	info;
	int			i;
	int			j;

	info.max_possible = 0;
	i = -1;
	while (++i < map_size)
	{
		j = -1;
		while (++j < map_size)
		{
			if (map[i][j] == 0)
				continue ;
			if (i != 0 && j != 0)
				map[i][j] = min_of_three(map[i - 1][j - 1], map[i - 1][j],
						map[i][j - 1]) + 1;
			if (map[i][j] > info.max_possible)
			{
				info.i = i;
				info.j = j;
				info.max_possible = map[i][j];
			}
		}
	}
	return (info);
}

void	get_bsq_result(char **map_o, t_bsq_info map_info, t_header header)
{
	int	i_counter;
	int	j_counter;

	i_counter = map_info.i;
	j_counter = map_info.j;
	while (i_counter > map_info.i - map_info.max_possible)
	{
		j_counter = map_info.j;
		while (j_counter > map_info.j - map_info.max_possible)
		{
			map_o[i_counter][j_counter] = header.fill_char;
			j_counter--;
		}
		i_counter--;
	}
}

void	solve_bsq(int *fd)
{
	char				**map_o;
	char				**map_t;
	t_header			map_header;
	t_bsq_info			info;

	map_header = parse_header(fd);
	if (map_header.map_size <= 0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	map_o = two_d_array_from_fd(fd, map_header.map_size);
	validate_map(map_header, map_o);
	map_t = transform_map(map_o, map_header.map_size, map_header);
	info = calculate_bsq(map_t, map_header.map_size);
	get_bsq_result(map_o, info, map_header);
	io_print_2d_array(map_o, map_header.map_size);
	free(map_t);
	free(map_o);
}
