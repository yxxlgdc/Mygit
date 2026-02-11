/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:06:53 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/11 21:43:51 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0' && i < n)
	{
		s1[i] == s2[i];
	}
	return (s1[i] == s2[i]);
}

int	main(void)
{
	char	*txt1;
	char	*txt2;

	txt1 = "hola que tal";
	txt2 = "hola como estas";
	ft_strncmp(txt1, txt2, 4);
	return (0);
}
