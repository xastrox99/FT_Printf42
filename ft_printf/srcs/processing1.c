/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:47:39 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/22 15:34:20 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	processing1(const char *format, va_list ap1)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (format[++i])
	{
		if (!check_format((char *)format, i))
		{
			write(1, &format[i], 1);
			len++;
		}
		else
		{
			len += s_print(ap1, check_format((char *)format, i), i, format);
			i++;
		}
	}
	return (len);
}
