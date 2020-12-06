/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:56:32 by kypark            #+#    #+#             */
/*   Updated: 2020/07/09 20:56:52 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while ((n < nb) && (src[n] != '\0'))
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
