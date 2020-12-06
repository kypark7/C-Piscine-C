/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:58:59 by kypark            #+#    #+#             */
/*   Updated: 2020/07/16 12:28:19 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strcmp(char *argv1, char *argv2)
{
	char	c1;
	char	c2;

	while ((*argv1 != '\0') && (*argv2 != '\0'))
	{
		c1 = *argv1++;
		c2 = *argv2++;
		if (c1 > c2)
			return (1);
		if (c2 > c1)
			return (-1);
	}
	if (*argv2 == '\0')
		return (1);
	return (0);
}

void		sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 1)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
