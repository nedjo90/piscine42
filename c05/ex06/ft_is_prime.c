/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:09:43 by nhan              #+#    #+#             */
/*   Updated: 2023/06/18 23:42:52 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	n;

	n = nb;
	if (nb <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
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
	int j;
	double t;
	(void)argc;
	t = 0.0;
	i = ft_putnbr(argv[1]);
	clock_t begin = clock();
	j = ft_is_prime(i);
	clock_t end = clock();
	t += (double)(end - begin) / CLOCKS_PER_SEC;
	if (j == 1)
	{
		printf("%d est un nombre premier\n", i);
		printf("Temps de calcul = %f secondes\n", t);
	}
	else
	{
		printf("%d n'est pas un nombre premier\n", i);
		printf("Temps de calcul = %f secondes\n", t);
	}
	return (0);
}*/
