/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:12:29 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/01 18:42:30 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

extern	void	ft_putchar(char c);

void	marks(int x, int y, int fil, int col)
{
	if ((fil == 0 && col == 0) || (fil == x -1 && col == 0)
		|| (fil == 0 && col == y -1) || (fil == x -1 && y -1 == col))
	{
		ft_putchar('o');
	}
	else if (fil == 0 || fil == x -1)
	{
		ft_putchar('|');
	}
	else if (col == 0 || col == y -1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	fil;
	int	col;

	col = 0;
	while (col < y)
	{
		fil = 0;
		while (fil < x)
		{
			marks (x, y, fil, col);
			fil++;
		}
		ft_putchar('\n');
		col++;
	}
}
