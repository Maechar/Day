/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:25:02 by maechard          #+#    #+#             */
/*   Updated: 2017/03/21 19:28:14 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_nb_mots(char *s)
{
	int		nb_mots;
	int		a;

	nb_mots = 0;
	a = 0;
	if (s == NULL)
		return (0);
	while (s[a] != '\0')
	{
		while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
			a++;
		if (s[a] >= 33 && s[a] <= 126)
			nb_mots++;
		while (s[a] != ' ' && s[a] != '\n' && s[a] != '\t' && s[a] != '\0')
			a++;
	}
	return (nb_mots);
}

int		ft_nb_lettres(char *str, int a)
{
	int		nb;

	nb = 0;
	while (str[a] != '\t' && str[a] != ' ' && str[a] != '\n')
	{
		nb++;
		a++;
	}
	return (nb);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	tab = (char **)malloc(sizeof(char *) * ft_nb_mots(str) + 1);
	while (str[a] != '\0')
	{
		while (str[a] == '\t' || str[a] == ' ' || str[a] == '\n')
			a++;
		if (str[a] != '\0')
		{
			b = 0;
			tab[c] = (char *)malloc(sizeof(char) * ft_nb_lettres(str, a) + 1);
			while (str[a] != '\t' && str[a] != '\n' && str[a] != ' ')
				tab[c][b++] = str[a++];
			tab[c][b] = '\0';
			c++;
		}
	}
	tab[ft_nb_mots(str)] = NULL;
	return (tab);
}
