/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:55:23 by nhan              #+#    #+#             */
/*   Updated: 2023/06/14 13:43:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_char_nbr(unsigned int nb)
{
	char	tab[11];
	int		i;

	i = 0;
	while (nb != 0)
	{
		tab[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, tab + i, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			ft_char_nbr((unsigned int)(nb * -1));
		}
		else
			ft_char_nbr((unsigned int)nb);
	}
}
/*
int main(void)
{
	int x = -21483648;
	int y = 21483647;
	int z = 0;
	//printf("%d - %d - %d", x, y, z);
	ft_putnbr(x);
	write(1, "\n", 1);
	ft_putnbr(y);
	write(1, "\n", 1);
	ft_putnbr(z);
}*/
