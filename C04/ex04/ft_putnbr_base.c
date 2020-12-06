/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:15:43 by kypark            #+#    #+#             */
/*   Updated: 2020/07/21 16:54:44 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				check_strlen(char *base)
{
	int			i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int				error(char *base)
{
	int			i;
	int			j;

	i = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (i < check_strlen(base))
	{
		if ((base[i] == '+') || (base[i]) == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < check_strlen(base))
	{
		j = i + 1;
		while (j < check_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long long	num;
	char		answer[100];

	num = nbr;
	if (error(base) == 0)
		return ;
	if (nbr < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	i = 0;
	if (num == 0)
		write(1, &base[num], 1);
	else
	{
		while (num > 0)
		{
			answer[i++] = base[num % check_strlen(base)];
			num /= check_strlen(base);
		}
		while (--i >= 0)
			write(1, &answer[i], 1);
	}
}
