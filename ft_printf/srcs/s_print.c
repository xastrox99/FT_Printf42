/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:26:52 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/23 11:46:10 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

int	s_print(va_list ap, int j, int i, const char *format)
{
	if (j == 1)
		return (ft_putchar(va_arg(ap, int)));
	else if (j == 2)
		return (ft_printstr(va_arg(ap, char *)));
	else if (j == 6 || j == 7)
		return (x_traitement(va_arg(ap, unsigned int), j));
	else if (j == 3)
	{
		ft_printstr("0x");
		return (hexa_traitement(va_arg(ap, unsigned long)));
	}
	else if (j == 4 || j == 5)
		return (di_traitement(va_arg(ap, int)));
	else if (j == 8)
		return (u_traitement((int)va_arg(ap, unsigned int)));
	else if (j == 9)
		return (ft_putchar(format[i]));
	return (0);
}
