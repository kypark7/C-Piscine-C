/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:51:04 by kypark            #+#    #+#             */
/*   Updated: 2020/07/21 20:23:25 by kypark           ###   ########.fr       */
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
		if ((base[i] == '+') || (base[i]) == '-' || base[i] == ' '
				|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	i = 0;
	while (i < check_strlen(base))
	{
		j = -1;
		while (++j < check_strlen(base))
		{
			if ((base[i] == base[j]) && (i != j))
				return (0);
		}
		i++;
	}
	return (1);
}

int				ft_base(char *str, char *base, int i)
{
	long long	num;
	int			i_;
	int			j;
	int			cnt;

	num = 0;
	i_ = i;
	cnt = 0;
	while (str[i_])
	{
		j = 0;
		while (base[j])
		{
			if (str[i_] == base[j])
			{
				num = (num + j) * check_strlen(base);
				cnt++;
				break ;
			}
			j++;
		}
		if (cnt != (++i_ - i))
			break ;
	}
	return (num / check_strlen(base));
}

int				ft_atoi_base(char *str, char *base)
{
	int			i;
	long long	num;
	int			minus;

	i = 0;
	num = 0;
	minus = 1;
	if (error(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	num = ft_base(str, base, i);
	return ((int)num * minus);
}
