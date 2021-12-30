/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:15:52 by cryonayes         #+#    #+#             */
/*   Updated: 2021/12/16 12:01:54 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"
#include "str_utils.h"
#include "bsq/header_parser.h"

void	validate_header(t_header *header)
{
	char	empty;
	char	fill;
	char	obstacle;

	empty = header->empty_char;
	fill = header->fill_char;
	obstacle = header->obstacle_char;
	if (empty == fill || empty == obstacle)
		header->map_size = 0;
	if (fill == obstacle)
		header->map_size = 0;
	return ;
}

struct s_header	parse_header(int *fd)
{
	char			*buffer;
	unsigned int	counter;
	struct s_header	header;

	counter = 0;
	buffer = malloc(sizeof (char) * 16);
	while (counter < 16)
	{
		read(*fd, (char *)(buffer + sizeof (char) * counter), 1);
		if (buffer[counter] == '\n')
			break ;
		counter++;
	}
	header.map_size = str_to_int(buffer);
	header.fill_char = buffer[counter - 1];
	header.obstacle_char = buffer[counter - 2];
	header.empty_char = buffer[counter - 3];
	validate_header(&header);
	free(buffer);
	return (header);
}
