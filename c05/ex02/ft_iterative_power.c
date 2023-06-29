/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:33:33 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 23:29:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
int	ft_putnbr(char *str)
{
	long long i;
	long long s;
	long long sum;

	i = 0;
	s = 1;
	sum = 0;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i])
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	return((int)sum * s);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	(void)argc;
	i = ft_putnbr(argv[1]);
	j = ft_putnbr(argv[2]);
	printf("%d a la puissance de %d ==> %d\n",i, j, ft_iterative_power(i, j));
}*/
