/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcil <fcil@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:39:32 by fcil              #+#    #+#             */
/*   Updated: 2021/12/14 20:39:47 by fcil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_op	ft_get_index(char *str)
{
	if (!*str || str[1])
		return (op_null);
	if (*str == '+')
		return (op_sum);
	if (*str == '-')
		return (op_sub);
	if (*str == '/')
		return (op_div);
	if (*str == '*')
		return (op_mul);
	if (*str == '%')
		return (op_mod);
	return (op_null);
}

int	main(int argc, char **argv)
{
	void	(*do_op[5])(int, int);
	t_op	op;

	do_op[op_sum] = &ft_sum;
	do_op[op_sub] = &ft_sub;
	do_op[op_div] = &ft_div;
	do_op[op_mul] = &ft_mul;
	do_op[op_mod] = &ft_mod;
	if (argc == 4)
	{
		op = ft_get_index(argv[2]);
		if (op == op_null)
			ft_putnbr(0);
		else
			do_op[op](ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
