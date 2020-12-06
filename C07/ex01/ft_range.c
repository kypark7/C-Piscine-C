/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:43:05 by kypark            #+#    #+#             */
/*   Updated: 2020/07/23 14:53:51 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*array;
	int i;

	i = 0;
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if ((!array) || (min >= max))
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	array[i] = '\0';
	return (array);
}
