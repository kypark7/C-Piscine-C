/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:16:53 by kypark            #+#    #+#             */
/*   Updated: 2020/07/15 19:17:55 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		answer *= nb;
		power--;
	}
	return (answer);
}
