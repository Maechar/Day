/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:16:00 by maechard          #+#    #+#             */
/*   Updated: 2017/03/16 12:55:47 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		address;
	int		address2;
	int		size;

	address = 0;
	address2 = 0;
	size = 0;
	while (str[address] != '\0')
		size++;
	if (size == 0)
		return (str);
	while (str[address] != '\0')
	{
		while (str[address + address2] == to_find[address2])
		{
			if (address2 == size - 1)
				return (str + address);
			address2++;
		}
		address2 = 0;
		address++;
	}
	return (0);
}
