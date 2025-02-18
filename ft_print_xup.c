/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:32:57 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/11 11:32:59 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_xup(unsigned int nb)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
		i += ft_print_xup(nb / 16);
	i += ft_print_char(base[nb % 16]);
	return (i);
}
