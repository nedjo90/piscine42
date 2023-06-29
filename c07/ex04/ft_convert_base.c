/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:38:44 by nhan              #+#    #+#             */
/*   Updated: 2023/06/28 16:39:37 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_nb_digit(int n, int sb);
void	ft_revert(char *str, int size);
int		ft_convert(int n, char *str, char *base, int sb);
char	*ft_itoa_base(int n, char *base);
int		ft_isspace(char str);

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] || base[j] == '+' || base[j] == '-'
				|| base[j] <= ' ' || base[i] == '+' || base[i] == '-'
				|| base[i] <= ' ' || base[i] == 127 || base[j] == 127)
				return (0);
			j++;
		}
		i++;
	}
	if (i < 1)
		return (0);
	return (1);
}

int	ft_is_in_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (0);
		i++;
	}
	return (1);
}

long long	ft_convert_to_int(char *str, char *base, long long p)
{
	long long	i;
	long long	j;
	long long	n;
	long long	power;

	i = 0;
	power = 1;
	j = 0;
	while (base[i])
		i++;
	while (p > 0)
	{
		power *= i;
		p--;
	}
	while (*str != base[j])
		j++;
	n = j * power;
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	long long	i;
	long long	s;
	long long	n;
	long long	j;

	i = 0;
	s = 1;
	n = 0;
	while (!ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	j = i;
	while (!ft_is_in_base(str[i], base))
		i++;
	while (j < i)
	{
		n += ft_convert_to_int(str + j, base, i - j - 1);
		j++;
	}
	return ((int)n * s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			n;
	char		*str;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
	{
		str = NULL;
		return (str);
	}
	n = ft_atoi_base(nbr, base_from);
	str = ft_itoa_base(n, base_to);
	return (str);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
}*/
