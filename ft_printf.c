/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 00:41:40 by ndejsong          #+#    #+#             */
/*   Updated: 2023/01/05 04:53:06 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(char input, va_list args)
{
	int	len;

	len = 0;
	if (input == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (input == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (input == 'p')
		len = ft_putbase_p(va_arg(args, unsigned long), "0123456789abcdef");
	else if (input == 'd' || input == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (input == 'u')
		len = ft_putnbr(va_arg(args, unsigned int));
	else if (input == 'x')
		len = ft_putbase(va_arg(args, unsigned int), "0123456789abcdef");
	else if (input == 'X')
		len = ft_putbase(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (input == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			len += ft_putchar(*format);
		else
		{
			format++;
			len += ft_printf_arg(*format, args);
		}
		format++;
	}
	va_end(args);
	return (len);
}
