/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:09:43 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 15:31:15 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		j++;
	}
	if (nb < 0)
		return (0);
	return (j);
}
/*
int	ft_putnbr(char *str)
{
	long long i;
	long long s;
	long long sum;

	i = 0;
	sum = 0;
	s = 1;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while(str[i])
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	return ((int)sum * s);
}

int main(int argc, char **argv)
{
	int i;
	(void)argc;
	i = ft_putnbr(argv[1]);
	printf("la racine carre de  %d est ===>  %d\n", i, ft_sqrt(i));
	return (0);
}*/
