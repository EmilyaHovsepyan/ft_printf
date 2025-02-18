/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:49:11 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/18 11:57:32 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_printf(const char *str, ...);
int	check_type(char format, va_list *args);
int	ft_print_p(unsigned long nb);
int	ft_print_str(char *str);
int	ft_print_dec(int n);
int	ft_print_uns(unsigned int n);
int	ft_print_x(unsigned int nb);
int	ft_print_xup(unsigned int nb);

#endif
