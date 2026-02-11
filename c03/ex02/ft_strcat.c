/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:34:04 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/11 21:43:49 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest != '\0')
	{
		i++;
	}
	while (src != '\0')
	{
		dest[i] = src[x];
		j++;
	}
	return (dest);
}

/*int main()
{
	char dest[17] = "hola";
	char *txt = "soy yowi";
	ft_strcat(dest, txt):
	return(0);
}*/