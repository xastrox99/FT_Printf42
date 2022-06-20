/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:45:01 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/22 15:44:59 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	check_format(char *c, int i)
{
	if (c[i] != '%')
		return (0);
	else
	{
		if (c[i + 1] == 'c')
			return (1);
		else if (c[i + 1] == 's')
			return (2);
		else if (c[i + 1] == 'p')
			return (3);
		else if (c[i + 1] == 'd')
			return (4);
		else if (c[i + 1] == 'i')
			return (5);
		else if (c[i + 1] == 'x')
			return (6);
		else if (c[i + 1] == 'X')
			return (7);
		else if (c[i + 1] == 'u')
			return (8);
	}
	return (9);
}
