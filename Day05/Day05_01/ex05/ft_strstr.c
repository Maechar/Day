/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:16:00 by maechard          #+#    #+#             */
/*   Updated: 2017/03/15 16:58:52 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		address;
	int		address2;

	address = 0;
	address2 = 0;
	while (str[address] != '\0')
	{
		if (str[address] == to_find[x++])
		{
			if (to_find[x] == '\0')
				return (&str[address - address2 + 1]);
		}
		else
			address2 = 0;
		address++;
	}
	return ("NULL");
}
