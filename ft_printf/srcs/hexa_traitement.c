/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_traitement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:48:35 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/22 11:59:01 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

int	hexa_traitement(unsigned long nb)
{
	int	i;

	i = 3;
	ft_printp(nb);
	while (nb >= 16)
	{
		nb /= 16;
		i++;
	}
	return (i);
}
