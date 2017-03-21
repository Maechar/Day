/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 19:55:33 by maechard          #+#    #+#             */
/*   Updated: 2017/03/18 21:28:37 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		dif;
	int		address;
	int		*ran;

	address = 0;
	dif = max - min;
	ran = malloc(dif * sizeof(*ran));
	if (ran == NULL || min >= max)
		return (NULL);
	while (min != max)
	{
		ran[address] = min;
		address++;
		min++;
	}
	return (ran);
}
