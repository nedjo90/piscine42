/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:55:43 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 15:08:41 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
	printf("le %d eme nombre de fibonacci est %d\n", i, ft_fibonacci(i));
}*/
