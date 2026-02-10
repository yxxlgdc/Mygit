/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogarrid <yogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:51:29 by yogarrid          #+#    #+#             */
/*   Updated: 2026/02/10 18:36:10 by yogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126) || (str[i] == '\0'))
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

	txt = "";
	ft_str_is_printable(txt);
	return (0);
}*/