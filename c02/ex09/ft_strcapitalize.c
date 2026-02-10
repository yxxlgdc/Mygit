/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:48:21 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/10 19:24:19 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 && str[i] > 122)
		{
			i++;
		}
		else
		{
			i++;
			str[i] + 32
		}
		return (str);
	}
}

int	main(void)
{
	char *txt;

	txt = "hola soy yowi";
	ft_strcapitalize(txt);
	return (0);
}