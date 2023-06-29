/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:17:25 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 23:52:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb = (nb * ft_recursive_factorial(nb - 1));
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
	while(str[i])
	{
		sum *= 10;
		sum += (str[i] - '0');
		i++;
	}
	return ((int)sum * s);
}

int	main(int argc, char **argv)
{
	int i;
	(void)argc;

	i = ft_putnbr(argv[1]);
	printf("%d ==> %d\n", i, ft_recursive_factorial(i));
}*/
