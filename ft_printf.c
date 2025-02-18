/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:43:51 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/02/18 11:39:15 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char format, va_list *args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(*args, int));
	else if (format == 's')
		count += ft_print_str(va_arg(*args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_print_dec(va_arg(*args, int));
	else if (format == 'u')
		count += ft_print_uns(va_arg(*args, unsigned int));
	else if (format == 'x')
		count = ft_print_x(va_arg(*args, unsigned int));
	else if (format == 'X')
		count = ft_print_xup(va_arg(*args, unsigned int));
	else if (format == 'p')
	{
		count = ft_print_str("0x");
		count += ft_print_p(va_arg(*args, unsigned long));
	}
	else if (format == '%')
		count = (ft_print_char('%'));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check_type(str[i], &args);
		}
		else
		{
			write(1, &str[i], 1);
			count ++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
 int main() {
      int printed_chars = ft_printf("hello %c sggs %s how are %d", 
			  'a', "como estas", -1567);
	  return 0;
 }*/
