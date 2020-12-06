/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:10:58 by kypark            #+#    #+#             */
/*   Updated: 2020/07/14 18:23:20 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	answer;

	answer = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		answer *= nb;
		nb--;
	}
	return (answer);
}
