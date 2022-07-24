/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:31:56 by yjarhbou          #+#    #+#             */
/*   Updated: 2022/01/02 17:31:58 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putnbr_u(unsigned int nb);
int	ft_put_p(unsigned long nbr, char *base);
int	ft_printf(const char *str, ...);
int	ft_strlen(char *s);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);

#endif