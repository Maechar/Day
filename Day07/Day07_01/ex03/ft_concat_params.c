/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 14:52:58 by maechard          #+#    #+#             */
/*   Updated: 2017/03/20 19:22:52 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		address;

	address = 0;
	while (str[address] != '\0')
		address++;
	return (address - 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int		address;
	int		address2;

	address = 0;
	address2 = 0;
	while (dest[address2])
		address2++;
	while (src[address])
	{
		dest[address + address2] = src[address];
		address++;
	}
	dest[address + address2] = '\n';
	dest[address + address2 + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		address;
	int		length;
	char	*res;

	length = 0;
	address = 1;
	while (address < argc)
	{
		length += ft_strlen(argv[address]) + 1;
		address++;
	}
	res = (char *)malloc(sizeof(char) * length);
	address = 1;
	while (address < argc)
	{
		ft_strcat(res, argv[address]);
		address++;
	}
	res[length + address - 1] = '\0';
	return (res);
}
