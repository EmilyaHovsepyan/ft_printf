/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:42:21 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/18 11:55:37 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long nb)
{
	char	*base;
	int		re;

	base = "0123456789abcdef";
	re = 0;
	if (nb >= 16)
		re += ft_print_p(nb / 16);
	re += ft_print_char(base[nb % 16]);
	return (re);
}
