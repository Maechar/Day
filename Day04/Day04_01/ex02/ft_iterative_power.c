/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:44:31 by maechard          #+#    #+#             */
/*   Updated: 2017/03/13 14:59:18 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		a;

	a = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (power > 0)
	{
		a *= nb;
		power--;
	}
	return (a);
}
