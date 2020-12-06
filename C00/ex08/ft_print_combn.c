/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:18:19 by kypark            #+#    #+#             */
/*   Updated: 2020/07/07 15:22:07 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			g_len;
char		g_buf[10];

void		ft_print(int num, int n)
{
	int		i;

	if (n == g_len)
	{
		write(1, g_buf, g_len);
		write(1, ", ", 2);
		return ;
	}
	i = num++;
	while (i <= 10 - g_len + n - 1)
	{
		i++;
		g_buf[n] = '0' + i;
		ft_print(i, n + 1);
	}
}

void		ft_print_combn(int n)
{
	int		i;
	char	c;

	i = 0;
	g_len = n;
	while (i < 10 - n)
	{
		g_buf[0] = '0' + i;
		ft_print(i++, 1);
	}
	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}
