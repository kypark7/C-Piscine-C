/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:29:20 by kypark            #+#    #+#             */
/*   Updated: 2020/07/11 19:07:04 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	num;

	i = 0;
	n = 0;
	num = 0;
	while (src[i] != '\0')
		i++;
	while (dest[n] != '\0')
		n++;
	if (size <= n)
		i = i + size;
	if (size > n)
		i = i + n;
	while ((src[num] != '\0') && n + 1 < size)
	{
		dest[n] = src[num];
		num++;
		n++;
	}
	dest[n] = '\0';
	return (i);
}
