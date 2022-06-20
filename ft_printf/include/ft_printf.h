/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:05:01 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/23 14:29:03 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>

int			ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_printhexa(unsigned int a, int i);
void		ft_printp(unsigned long a);
int			ft_printstr(char *str);
int			check_format(char *c, int i);
int			s_print(va_list ap, int j, int i, const char *format);
int			ft_printf(const char *format, ...);
size_t		ft_strlen(const char *s);
int			processing1(const char *format,
				va_list ap1);
int			hexa_traitement(unsigned long nb);
int			di_traitement(int nb);
int			u_traitement(unsigned int nb);
void		ft_putu(unsigned int nb);
int			x_traitement(unsigned int nb, int j);
#endif
