/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:00:21 by maechard          #+#    #+#             */
/*   Updated: 2017/03/28 16:14:14 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int     ft_tri(int a, int b)
{
	if (a > b)
	{
		printf("B");
		return (1);
	}
	if (a < b)
	{
		printf("A");
		return (-1);
	}
	return (0);
}

int		main(void)
{
	int		tab1[] = {1, 2, 3, 4, 5};
	int		tab2[] = {2, 1, 4, 3, 5};
	int		tab3[] = {10, 42, 56, 63, 5};
	int		tab4[] = {10, 42, 56, 63, 70};
	int		tab5[] = {70, 63, 56, 42, 10};
	int		tab6[] = {5, 63, 56, 42, 10};
	int		tab7[] = {0, 1, 2, 3, 4};
	int		tab8[] = {1, 1, 3, 5};
	int		tab9[] = {1, 1, 6, 4};
	int		tab10[] = {};

	printf("%d\n",ft_is_sort(tab1, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab2, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab3, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab4, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab5, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab6, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab7, 5, ft_tri));
	printf("%d\n",ft_is_sort(tab8, 4, ft_tri));
	printf("%d\n",ft_is_sort(tab9, 4, ft_tri));
	printf("%d\n",ft_is_sort(tab10, 1, ft_tri));
	return (0);
}
