/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:27:43 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/24 10:13:09 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = -1;
	len = 0;
	va_start(args, format);
	len = processing1(format, args);
	va_end(args);
	return (len);
}
