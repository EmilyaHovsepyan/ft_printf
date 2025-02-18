/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:21:03 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/11 11:21:05 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		i += ft_print_dec(n / 10);
		c = n % 10 + '0';
		i += write(1, &c, 1);
	}
	else
	{
		c = n + '0';
		i += write(1, &c, 1);
	}
	return (i);
}
/*int main()
{
     int len = ft_print_dec(-166114);
     printf("Returned length: %d\n", len);

     return 0;
 }*/
