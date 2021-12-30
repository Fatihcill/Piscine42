/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryonayes <cryonayes@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:15:58 by cryonayes         #+#    #+#             */
/*   Updated: 2021/11/09 21:15:59 by cryonayes        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_is_whitespace(char chr)
{
	if (chr == ' ' || chr == '\t'
		|| chr == '\v' || chr == '\f'
		|| chr == '\n' || chr == '\r')
	{
		return (1);
	}
	return (0);
}

int	str_to_int(char *src)
{
	int	result;
	int	polarity;
	int	index;

	result = 0;
	index = 0;
	polarity = 1;
	while (str_is_whitespace(*src) == 1)
		src++;
	while (*src == '-')
	{
		src++;
		polarity *= -1;
	}
	while (src[index] != '\0')
	{
		if (src[index] >= '0' && src[index] <= '9')
		{
			result = result * 10 + (src[index] - 48);
			index++;
			continue ;
		}
		break ;
	}
	return (result * polarity);
}
