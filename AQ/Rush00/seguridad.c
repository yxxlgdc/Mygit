/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seguridad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:12:29 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/01 18:32:10 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

extern void ft_putchar(char c);



void rush(int cow, int fil)
{
	int x = 5;
	int y = 3;

	while(y>0)
	{
		x = 5;
		while(x>0)
		{

			if ((x==5 && y==3) || (x==1 && y==1) || (x==1 && y==3 ) || (x== 5 && y==1))  ft_putchar('o');
			else if 
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}



int	main (void)
{
	rush (140,120);
	return (0);
}