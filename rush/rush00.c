/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:59:30 by dgeorges          #+#    #+#             */
/*   Updated: 2021/10/15 21:59:49 by dgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush_print(int *ligneMax, int *colMax, int *ligne, int *col)
{
	char	symbol[10];

	*symbol = "o-o| |o-o";
	if (*ligne == 1 && *col == 1)
		ft_putchar(symbol[0]);
	else if (*ligne == 1 && (1 < *col && *col < *colMax))
		ft_putchar(symbol[1]);
	else if (*ligne == 1 && *col == *colMax)
		ft_putchar(symbol[2]);
	else if ((1 < *ligne && *ligne < *ligneMax) && *col == 1)
		ft_putchar(symbol[3]);
	else if ((1 < *ligne && *ligne < *ligneMax) && (1 < *col && *col < *colMax))
		ft_putchar(symbol[4]);
	else if ((1 < *ligne && *ligne < *ligneMax) && *col == *colMax)
		ft_putchar(symbol[5]);
	else if (*ligne == *ligneMax && *col == 1)
		ft_putchar(symbol[6]);
	else if (*ligne == *ligneMax && (1 < *col && *col < *colMax))
		ft_putchar(symbol[7]);
	else if (*ligne == *ligneMax && (*col == *colMax))
		ft_putchar(symbol[8]);
}

void	rush(int ligneMax, int colMax)
{
	int		col;
	int		ligne;

	col = 1;
	ligne = 1;
	while (ligne <= ligneMax)
	{
		while (col <= colMax)
		{
			rush_print(&ligneMax, &colMax, &ligne, &col);
			col++;
		}
		ft_putchar('\n');
		col = 0;
		ligne++;
	}
}

int	main(void)
{
	rush(5, 3);
	return (0);
}
