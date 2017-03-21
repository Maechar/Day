/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 13:37:26 by maechard          #+#    #+#             */
/*   Updated: 2017/03/16 12:40:57 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		resultat;

	i = 0;
	j = 0;
	resultat = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (*str == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat *= 10;
		resultat += str[i] - 48;
		i++;
	}
	if (j == i)
		return (-resultat);
	else
		return (resultat);
}
