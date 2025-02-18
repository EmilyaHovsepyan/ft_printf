/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:25:52 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/11 11:25:53 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uns(unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	if (n >= 10)
	{
		i += ft_print_uns(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
		i++;
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
		i++;
	}
	return (i);
}
