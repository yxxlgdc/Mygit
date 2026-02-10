/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:36:00 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/10 18:37:35 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 'A' && str[i] > 'B'))
		{
			str[i] + 32;
			i++;
		}
	}
	return (str);
}

/*int main()
{
	char *txt;

	txt = "ABCDEFG";
	ft_strlowcase(txt);
	return(0);
}*/