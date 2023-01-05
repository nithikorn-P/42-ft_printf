/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 00:37:31 by ndejsong          #+#    #+#             */
/*   Updated: 2023/01/05 04:37:34 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_putbase(long number, char *base);
int	ft_putbase_p(unsigned long number, char *base);
int	ft_putnbr(long number);

#endif
