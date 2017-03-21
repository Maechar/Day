/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susitkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 13:58:26 by susitkov          #+#    #+#             */
/*   Updated: 2017/03/14 13:58:28 by susitkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void		ft_putnbr_base(int nbr, char *base);
int			ft_atoi_base(char *str, char *base);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	test[] = "Salut les aminches c'est cool show mem on fait de truc terrible\0.\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";
	if (atoi(argv[1]) == 0)
	{
		write(1, "\nEX00:\t", 7);
		ft_putstr(argv[2]);
		write(1, "\n\n", 2);
	}
	if (atoi(argv[1]) == 1)
	{
		write(1, "\nEX01:\t", 7);
		ft_putnbr(atoi(argv[2]));
		write(1, "\n\n", 2);
	}
	if (atoi(argv[1]) == 2)
	{
		printf("\nEX02:\tREAL = %d    MINE = %d\n\n", atoi(argv[2]), ft_atoi(argv[2]));
	}
	if (atoi(argv[1]) == 3)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX03:\tREAL = %s    MINE = %s\n\n", strcpy(dest, src), ft_strcpy(dest2, src));
	}
	if (atoi(argv[1]) == 4)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX04:\tREAL = %s    MINE = %s\n\n", strncpy(dest, src, atoi(argv[4])), ft_strncpy(dest2, src2, atoi(argv[4])));
	}
	if (atoi(argv[1]) == 5)
	{
		printf("\nEX05:\tREAL = %s    MINE = %s\n\n", strstr(argv[2], argv[3]), ft_strstr(argv[2], argv[3]));
	}
	if (atoi(argv[1]) == 6)
	{
		printf("\nEX06:\tREAL = %d    MINE = %d\n\n", strcmp(argv[2], argv[3]), ft_strcmp(argv[2], argv[3]));
	}
	if (atoi(argv[1]) == 7)
	{
		printf("\nEX07:\tREAL = %d    MINE = %d\n\n", strncmp(argv[2], argv[3], atoi(argv[4])), ft_strncmp(argv[2], argv[3], atoi(argv[4])));
	}
	if (atoi(argv[1]) == 8)
	{
		printf("\nEX08:\t%s\n\n", ft_strupcase(argv[2]));
	}
	if (atoi(argv[1]) == 9)
	{
		printf("\nEX19:\t%s\n\n", ft_strlowcase(argv[2]));
	}
	if (atoi(argv[1]) == 10)
	{
		printf("\nEX10:\t%s\n\n", ft_strcapitalize(argv[2]));
	}
	if (atoi(argv[1]) == 11)
	{
		printf("\nEX11:\t%d\n\n", ft_str_is_alpha(argv[2]));
	}
	if (atoi(argv[1]) == 12)
	{
		printf("\nEX12:\t%d\n\n", ft_str_is_numeric(argv[2]));
	}
	if (atoi(argv[1]) == 13)
	{
		printf("\nEX13:\t%d\n\n", ft_str_is_lowercase(argv[2]));
	}
	if (atoi(argv[1]) == 14)
	{
		printf("\nEX14:\t%d\n\n", ft_str_is_uppercase(argv[2]));
	}
	if (atoi(argv[1]) == 15)
	{
		printf("\nEX15:\t%d\n\n", ft_str_is_printable(argv[2]));
	}
	if (atoi(argv[1]) == 16)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX16:\tREAL: %s    MINE: %s\n\n", strcat(dest, src), ft_strcat(dest2, src2));
	}
	if (atoi(argv[1]) == 17)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX17:\tREAL: %s    MINE: %s\n\n", strncat(dest, src, atoi(argv[4])), ft_strncat(dest2, src2, atoi(argv[4])));
	}
	if (atoi(argv[1]) == 18)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX18:\tREAL: %lu    MINE: %d\n\tREAL: %s    MINE: %s\n\n", strlcat(dest, src, atoi(argv[4])), ft_strlcat(dest2, src2, atoi(argv[4])), dest, dest2);
	}
	if (atoi(argv[1]) == 19)
	{
		char	*dest = strdup(argv[2]);
		char	*dest2 = strdup(argv[2]);
		char	*src = strdup(argv[3]);
		char	*src2 = strdup(argv[3]);
		printf("\nEX19:\tREAL: %lu    MINE: %d\n\tREAL: %s    MINE: %s\n\n", strlcpy(dest, src, atoi(argv[4])), ft_strlcpy(dest2, src2, atoi(argv[4])), dest, dest2);
	}
	if (atoi(argv[1]) == 20)
	{
		write(1, "\nEX20:\t", 8);
		ft_putnbr_base(atoi(argv[2]), argv[3]);
	}
	if (atoi(argv[1]) == 21)
	{
		printf("\nEX21:\t%d\n", ft_atoi_base(argv[2], argv[3]));
	}
	if (atoi(argv[1]) == 22)
	{
		write(1, "\nEX23:\t", 8);
		ft_putstr_non_printable("BONJOUR \n\t\v\r\e");
	}
	if (atoi(argv[1]) == 23)
	{
		ft_print_memory(test, atoi(argv[2]));
	}
	return (0);
}
