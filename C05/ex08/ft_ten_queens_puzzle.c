/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <kypark@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 21:29:10 by kypark            #+#    #+#             */
/*   Updated: 2020/07/15 21:37:00 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_check_map[10][10];

void	fill_map(int n)
{
	int i;

	i = 0;
	while (i < 10)
	{
		g_check_map[n][i] = 1;
		g_check_map[i][n] = 1;
	}
	while (1)
	{
		if ((n > 9))
			break ;
		g_check_map[n][n] = 1;
		n++;
	}
	while (1)
	{
		if (n < 0)
			break ;
		g_check_map[n][n] = 1;
		n--;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			g_check_map[i][i] = 0;
			j++;
		}
		i++;
	}
	return (0);
}
