/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:50:15 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/11 14:06:40 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
   char *txt;

	txt = "hola 0000";
	ft_str_is_lower(txt);
	return (0);
}*/
