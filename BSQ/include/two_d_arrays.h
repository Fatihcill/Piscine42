/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_d_arrays.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:17:10 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/09 23:47:06 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWO_D_ARRAYS_H
# define TWO_D_ARRAYS_H

char	**two_d_array(char fill, int row, int col);
char	**two_d_array_from_str(char *str, int row_col_number);
char	**two_d_array_from_fd(int *fd, int size);
char	**two_d_array_filter_col(char **arr, int row_count, int col_to_filter);
char	**two_d_array_copy(char **src, char **dst, int i, int j);

#endif
