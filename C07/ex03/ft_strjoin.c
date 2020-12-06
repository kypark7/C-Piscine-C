/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:49:09 by kypark            #+#    #+#             */
/*   Updated: 2020/07/23 14:32:22 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			g_n;

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void		ft_strcat(char *result, char *strs, int g_n)
{
	int i;

	i = 0;
	while (strs[i])
	{
		result[g_n + i] = strs[i];
		i++;
	}
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = -1;
	g_n = 0;
	while (++i < size)
		g_n = g_n + ft_strlen(strs[i]) + ft_strlen(sep);
	if (size != 0)
		g_n = g_n - ft_strlen(sep);
	if (!(result = (char *)malloc(sizeof(char) * (1 + g_n))))
		return (0);
	i = -1;
	g_n = 0;
	while (++i < size)
	{
		ft_strcat(result, strs[i], g_n);
		g_n += ft_strlen(strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep, g_n);
		g_n += ft_strlen(sep);
	}
	if (size != 0)
		g_n = g_n - ft_strlen(sep);
	result[g_n] = '\0';
	return (result);
}
