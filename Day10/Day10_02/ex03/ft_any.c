/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 11:11:15 by maechard          #+#    #+#             */
/*   Updated: 2017/03/27 11:16:04 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*))
{
	int		address;

	address = 0;
	while (tab[address] != 0)
	{
		if (f(tab[address]) == 1)
			return (1);
		address++;
	}
	return (0);
}
