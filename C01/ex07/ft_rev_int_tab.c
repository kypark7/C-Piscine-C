/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:03:43 by kypark            #+#    #+#             */
/*   Updated: 2020/07/08 18:04:19 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int size_i;
	int i;

	i = 0;
	size_i = size - 1;
	while (i != (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size_i];
		tab[size_i] = temp;
		i++;
		size_i--;
	}
}
