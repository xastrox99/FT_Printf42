/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_traitement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:01:48 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/22 14:16:55 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	x_traitement(unsigned int nb, int j)
{
	int	i;

	i = 1;
	ft_printhexa(nb, j);
	while (nb >= 16)
	{
		i++;
		nb /= 16;
	}
	return (i);
}
