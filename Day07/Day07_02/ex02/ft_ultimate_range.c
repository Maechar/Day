/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:57:08 by maechard          #+#    #+#             */
/*   Updated: 2017/03/22 14:57:39 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		dif;
	int		address;

	address = min - 1;
	dif = max - min;
	if (min >= max)
		return (0);
	if(!(range[0] = (int*)malloc(sizeof(*range) * dif + 1)))
		return (0);
	while (++address < max)
	{
		range[0][address - min] = address;
		address++;
	}
	return (dif);
}
