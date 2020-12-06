/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:18:09 by kypark            #+#    #+#             */
/*   Updated: 2020/07/09 21:19:07 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int n;
	int num;

	i = 0;
	num = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[num] != '\0')
		num++;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			n++;
			if (n == num)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
