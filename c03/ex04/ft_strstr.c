/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@Student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:51:03 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/14 12:36:41 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	if (to_find[b] != '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[b] == str[i] && str[i] && to_find[b])
			return (&str[i]);
		i++;
		b++;
	}
}

int	main(void)
{
	char	*txt;
	char	*find;

	txt = "quiero un millon de euros";
	find = "millon";
	ft_strstr(txt, find);
	return (0);
}
