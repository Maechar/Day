/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 21:57:08 by maechard          #+#    #+#             */
/*   Updated: 2017/03/18 22:35:58 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		dif;
	int		address;

	address = 0;
	dif = max - min;
	range = malloc(dif * sizeof(*range));
	if (range == NULL || min >= max)
		return ('NULL');
	while (min != max)
	{
		range[address] = &min;
		address++;
		min++;
	}
	return (dif);
}
