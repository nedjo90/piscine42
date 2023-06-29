/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 00:04:31 by nhan              #+#    #+#             */
/*   Updated: 2023/06/20 18:06:43 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*p;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	p = (int *)malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (-1);
	*range = p;
	i = min;
	j = 0;
	while (min < max)
	{
		p[j] = min;
		min++;
		j++;
	}
	return (max - i);
}
/*
int	ft_putnbr(char *str)
{
	int			i;
	long long	nb;
	long long	s;

	s = 1;
	i = 0;
	nb = 0;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i])
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return ((int)nb * s);
}

int	main(int argc, char **argv)
{
	(void)argc;
	int	min;
	int	max;
	int **range;
	int i;
	int j;

	range = (int**)malloc(sizeof(int));
	min = ft_putnbr(argv[1]);	
	max = ft_putnbr(argv[2]);
	j = 0;
	i = ft_ultimate_range(range, min, max);
	printf("%d\t%d\n", min, max);
	while (j < i)
	{
		printf("%d / ", (*range)[j]);
		j++;
	}
	free(range);
}*/
