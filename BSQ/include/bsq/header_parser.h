/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_parser.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:17:01 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/10 18:14:40 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_PARSER_H
# define HEADER_PARSER_H

struct s_header
{
	char	empty_char;
	char	obstacle_char;
	char	fill_char;
	int		map_size;
};

typedef struct s_header	t_header;

t_header	parse_header(int *fd);

#endif
