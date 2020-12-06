/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 18:37:35 by kypark            #+#    #+#             */
/*   Updated: 2020/07/11 21:53:44 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (i == n)
		return (0);
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] == '\0')
		return (-1);
	return (1);
}
