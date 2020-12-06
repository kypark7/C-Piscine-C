/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:40:05 by kypark            #+#    #+#             */
/*   Updated: 2020/07/23 14:42:43 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*pointer;
	int		i;
	int		j;

	i = 0;
	while (src[i])
		i++;
	pointer = (char *)malloc(sizeof(i + 1));
	if (!pointer)
		return (NULL);
	j = 0;
	while (src[j])
	{
		pointer[j] = src[j];
		j++;
	}
	pointer[i] = '\0';
	return (pointer);
}
