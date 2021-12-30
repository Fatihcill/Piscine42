/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:16:44 by fcil              #+#    #+#             */
/*   Updated: 2021/12/14 20:35:15 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef enum e_op
{
	op_sum,
	op_sub,
	op_div,
	op_mul,
	op_mod,
	op_null,
}				t_op;

void	ft_sum(int a, int b);

void	ft_sub(int a, int b);

void	ft_div(int a, int b);

void	ft_mul(int a, int b);

void	ft_mod(int a, int b);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

#endif
