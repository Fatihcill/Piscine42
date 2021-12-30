/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:29:31 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/04 20:36:40 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max_of_two(int first, int second)
{
	if (first > second)
	{
		return (first);
	}
	return (second);
}

int	max_of_three(int first, int second, int third)
{
	int	max;

	if (first > second)
		max = first;
	else
		max = second;
	if (max < third)
		max = third;
	return (max);
}

int	min_of_two(int first, int second)
{
	if (first < second)
	{
		return (first);
	}
	return (second);
}

int	min_of_three(int first, int second, int third)
{
	int	min;

	if (first < second)
		min = first;
	else
		min = second;
	if (min > third)
		min = third;
	return (min);
}
