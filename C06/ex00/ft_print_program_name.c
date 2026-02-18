/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@Student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:47:52 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/18 20:14:25 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
