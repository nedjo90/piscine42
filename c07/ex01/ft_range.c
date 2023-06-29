/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 22:04:31 by nhan              #+#    #+#             */
/*   Updated: 2023/06/21 17:37:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int ft_putnbr(char *str)
{
	int i;
	long long nb;
	long long s;

	i = 0;
	nb = 0;
	s = 1;
	if (str[i] == '-')
	{
		s *= -1;
		i ++;
	}
	while(str[i] != '\0')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	return ((int)nb * s);
}

int	main(int argc, char **argv)
{
	int i;
	int	min;
	int max;
	int *tab;

	(void)argc;
	min = ft_putnbr(argv[1]);
	max = ft_putnbr(argv[2]);
	printf("min = %d / max = %d\n", min, max);
	i = 0;
	tab = ft_range(min, max);
	if (tab == NULL)
		return (0);
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}*/
