/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:34:08 by nhan              #+#    #+#             */
/*   Updated: 2023/06/13 23:30:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_convert_hexa(unsigned char chr)
{
	unsigned char	i;
	char			*p;

	p = "0123456789abcdef";
	i = chr / 16;
	write(1, p + i, 1);
	i = chr % 16;
	write(1, p + i, 1);
}

void	ft_print_hexa(char *tab, unsigned int n, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = n + 16;
	j = 0;
	while (n < i && n < size)
	{
		ft_convert_hexa(*(tab + n));
		if (n % 2 != 0)
		{
			write(1, " ", 1);
			j++;
		}
		n++;
		j += 2;
	}
	while (j < 40)
	{
		write(1, " ", 1);
		j++;
	}
}

void	ft_print_addr(unsigned long long n)
{
	char				tab[16];
	unsigned long long	x;
	int					i;

	i = 0;
	while (n != 0)
	{
		x = n % 16;
		if (x < 10)
			tab[i] = 48 + x;
		else
			tab[i] = 87 + x;
		n /= 16;
		i++;
	}
	while (i < 16)
		tab[i++] = '0';
	while (i-- > 0)
	{
		write(1, &tab[i], 1);
	}
	write(1, ": ", 2);
}

void	ft_printable_or_not(char *texte, unsigned int n, unsigned int size)
{
	unsigned int	i;

	i = n + 16;
	while (n < i && n < size)
	{
		if (*(texte + n) >= ' ' && *(texte + n) <= '~')
		{
			write(1, texte + n, 1);
		}
		else
			write(1, ".", 1);
		n ++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (addr);
	while (i < size)
	{
		ft_print_addr((unsigned long long)(addr + i));
		ft_print_hexa((char *)addr, i, size);
		ft_printable_or_not((char *)addr, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
