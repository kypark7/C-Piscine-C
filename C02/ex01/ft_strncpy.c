/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:06:12 by kypark            #+#    #+#             */
/*   Updated: 2020/07/13 11:33:41 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if ((src[i]) == '\0' || j == 1)
		{
			dest[i] = '\0';
			j = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
