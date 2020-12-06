/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 11:52:19 by kypark            #+#    #+#             */
/*   Updated: 2020/07/23 14:47:25 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arry;

	i = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	arry = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arry[i] = min;
		i++;
		min++;
	}
	*range = arry;
	return (i);
}
