/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 01:58:06 by ndejsong          #+#    #+#             */
/*   Updated: 2023/01/05 04:05:42 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putbase(long number, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (number < 0)
	{
		len += ft_putchar('-');
		number *= -1;
	}
	if (number >= (long) base_len)
		len += ft_putbase(number / base_len, base);
	len += ft_putchar(base[number % base_len]);
	return (len);
}

int	ft_putbase_unsigned(unsigned long number, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (number >= (unsigned long) base_len)
		len += ft_putbase(number / base_len, base);
	len += ft_putchar(base[number % base_len]);
	return (len);
}

int	ft_putbase_p(unsigned long number, char *base)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putbase_unsigned(number, base);
	return (len);
}
