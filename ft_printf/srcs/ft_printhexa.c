/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:25:34 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/23 11:46:25 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

void	ft_printhexa(unsigned int a, int i)
{
	char	*t;
	char	*t1;

	t = "0123456789abcdef";
	t1 = "0123456789ABCDEF";
	if (i == 6 || i == 3)
	{
		if (a > 15)
		{
			ft_printhexa(a / 16, i);
			ft_printhexa(a % 16, i);
		}
		else
			ft_putchar(t[a]);
	}
	else if (i == 7)
	{
		if (a > 15)
		{
			ft_printhexa(a / 16, i);
			ft_printhexa(a % 16, i);
		}
		else
			ft_putchar(t1[a]);
	}
}
