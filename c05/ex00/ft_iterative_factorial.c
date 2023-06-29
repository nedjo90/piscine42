/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:31:24 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 23:19:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	sum = 1;
	while (nb > 0)
	{
		sum *= nb;
		nb--;
	}
	return (sum);
}
/*
int ft_putnbr(char *str)
{
	long long	i;
	long long	s;
	long long	sum;

	i = 0;
	s = 1;
	sum = 0;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		sum *= 10;
		sum += (str[i] -'0');
		i++;
	}
	return ((int)sum * s);
}

int	main(int argc, char **argv)
{
	int i;
	(void)argc;
	i = ft_putnbr(argv[1]);
	printf("%d\n", ft_iterative_factorial(i));
}*/
