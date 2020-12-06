/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:54:24 by kypark            #+#    #+#             */
/*   Updated: 2020/07/23 14:59:41 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_base_from(char *nbr, char *base_from, int i)
{
	int			i_;
	int			j;
	int			cnt;
	long long	num;

	i_ = i;
	cnt = 0;
	num = 0;
	while (nbr[i_])
	{
		j = 0;
		while (base_from[j])
		{
			if (nbr[i_] == base_from[j])
			{
				num = (num + j) * ft_strlen(base_from);
				cnt++;
				break ;
			}
			j++;
		}
		if (cnt != ++i_ - i)
			break ;
	}
	return (num / ft_strlen(base_from));
}

void			ft_base_to(int result, char *base_to)
{
	if (result / ft_strlen(base_to) < 1)
		printf("*%c*", base_to[result]);
	else
	{
		ft_base_to(result / ft_strlen(base_to), base_to);
		printf("/%c/", base_to[result % ft_strlen(base_to)]);
	}
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			i;
	int			minus;
	long long	result;
	char		*answer;

	i = 0;
	minus = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			minus *= -1;
		i++;
	}
	result = ft_base_from(nbr, base_from, i);
	printf("%lld", result);
	printf("%d", ft_base_to_num(result, base_to, 0));
	return (answer);
}
