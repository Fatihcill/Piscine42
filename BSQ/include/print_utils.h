/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:17:05 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/09 21:17:06 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_UTILS_H
# define PRINT_UTILS_H

char	*io_strcnpy(char *src, char *dest, unsigned int len);
char	*io_strcnpy_filter(char *src, char *dest, unsigned int len, char c);
void	io_print_2d_array(char **array, int arr_size);

#endif
