/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:16:00 by maechard          #+#    #+#             */
/*   Updated: 2017/03/15 21:25:39 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr(char *str);
void	ft_putchar(char c);

char	*ft_strstr(char *str, char *to_find)
{
	int		address;
	int		address2;

	address = 0;
	address2 = 0;
	while (str[address] != '\0')
	{
		if (str[address] == to_find[address2])
		{
			address2++;
			if (to_find[address2] == '\0')
				return (str + (address - address2 + 1));
		}
		else
			address2 = 0;
		address++;
	}
	return (0);
}
int		main(void)
{
	char tab[] = "bsdcvvcchocodskvbksbkjnkjbuyvbsd";
	char tab2[] = "choco";

	ft_putstr(ft_strstr(tab, tab2));
	return (0);
}
