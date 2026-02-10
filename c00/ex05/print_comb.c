/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:25:03 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/05 18:26:00 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	char	d;
	char	e;

	d = ',';
	e = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_printcomb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a != b && a != c && b != c)
				{
					ft_write(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_printcomb();
	return (0);
}
