/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solver.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:16:58 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/10 18:14:25 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_SOLVER_H
# define BSQ_SOLVER_H

struct s_bsq_info
{
	int	i;
	int	j;
	int	max_possible;
};

typedef struct s_bsq_info	t_bsq_info;

void		validate_map(t_header map_h, char **map_o);
char		**transform_map(char **map, int size, t_header header);
t_bsq_info	calculate_bsq(char **map, int map_size);
void		get_bsq_result(char **map_o, t_bsq_info map_info, t_header header);
void		solve_bsq(int *fd);

#endif
