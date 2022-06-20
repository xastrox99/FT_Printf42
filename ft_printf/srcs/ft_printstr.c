/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:26:05 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/23 11:16:02 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
