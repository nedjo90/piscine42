/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:03:36 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 23:39:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (nb);
}
/*
int ft_putnbr(char *str)
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
	while (str[i])
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
	int j;
	(void)argc;
	i = ft_putnbr(argv[1]);
	j = ft_putnbr(argv[2]);
	printf("%d a la puissance de %d ==> %d", i, j, ft_recursive_power(i, j));
	return (0);
}*/
