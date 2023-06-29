/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:52:19 by nhan              #+#    #+#             */
/*   Updated: 2023/06/17 22:20:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	if (*base == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_convert(long long n, char *base, long long size)
{
	int		i;
	char	tab[10000];

	i = 0;
	while (n > 0)
	{
		tab[i] = base[n % size];
		n /= size;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &tab[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	long long	n;
	long long	i;

	i = ft_checkbase(base);
	if (i > 1)
	{
		n = nb;
		if (n < 0)
		{
			n *= -1;
			write(1, "-", 1);
		}
		if (n == 0)
			write(1, base, 1);
		else
			ft_convert(n, base, i);
	}
}
/*
int	ft_nbr(char *nb)
{
	long long	n;
	long long	s;
	long long	i;

	s = 1;
	i = 0;
	n = 0;
	if (*nb == '-')
	{
		s *= -1;
		i++;
	}
	while (nb[i] != '\0')
	{
		n *= 10;
		n += (nb[i] - '0');
		i++;
	}
	return ((int)n * s);
}

int	main(int argc, char **argv)
{
	int	n;

	n = ft_nbr(argv[1]);
	printf("NOMBRE : %d\n", n);
	printf("BASE : %s\t===>\t%d\n", argv[2], ft_checkbase(argv[argc - 1]));
	printf("After conversion of the number from the base :\n");
	ft_putnbr_base(n, argv[2]);
	printf("\n");
	return (0);
}*/
