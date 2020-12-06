/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:13:13 by kypark            #+#    #+#             */
/*   Updated: 2020/07/13 11:30:14 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	hex;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			write(1, "\\", 1);
			if ((unsigned char)str[i] / 16 < 10)
				hex = '0' + ((unsigned char)str[i] / 16);
			if ((unsigned char)str[i] / 16 >= 10)
				hex = (((unsigned char)str[i] / 16) % 10) + 'a';
			write(1, &hex, 1);
			if ((unsigned char)str[i] % 16 < 10)
				hex = '0' + ((unsigned char)str[i] % 16);
			if ((unsigned char)str[i] % 16 >= 10)
				hex = 'a' + (((unsigned char)str[i] % 16) % 10);
			write(1, &hex, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
