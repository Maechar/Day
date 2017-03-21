/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:11:19 by maechard          #+#    #+#             */
/*   Updated: 2017/03/15 12:28:14 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, int nb)
{
	int		address;
	int		address2;

	address = 0;
	address2 = 0;
	while (dest[address] != '\0')
		address++;
	while (src[address2] < n && src[address2] != '\0')
	{
		dest[address] = src[address2];
		address++;
		address2++;
	}
	address2 = 0;
	while (src[address2] != '\0')
		address++;
	if (n < address2)

	return (dest);
}
