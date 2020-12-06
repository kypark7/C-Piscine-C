/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.kr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:21:31 by kypark            #+#    #+#             */
/*   Updated: 2020/07/08 10:26:00 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void			ft_putnbr(int nb)
{
	long int	num;
	char		c[10];
	int			len;

	num = nb;
	if (num == 0)
		write(1, "0", 1);
	if (num < 0)
		write(1, "-", 1);
	num = num < 0 ? num * (-1) : num;
	len = 0;
	while (num > 0)
	{
		c[len] = '0' + (num % 10);
		num = num / 10;
		len++;
	}
	len--;
	while (len >= 0)
		write(1, &c[(len--)], 1);
}
