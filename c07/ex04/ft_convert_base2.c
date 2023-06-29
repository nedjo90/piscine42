/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:38:44 by nhan              #+#    #+#             */
/*   Updated: 2023/06/28 16:23:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_nb_digit(int n, int sb)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		while (n < 0)
		{
			n /= sb;
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n /= sb;
			i++;
		}
	}
	return (i);
}

void	ft_revert(char *str, int size)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	ft_convert(int n, char *str, char *base, int sb)
{
	int	i;

	i = 0;
	if (n == 0)
		str[i++] = base[0];
	else if (n < 0)
	{
		while (n < 0)
		{
			str[i++] = base[n % sb * -1];
			n /= sb;
		}
		str[i++] = '-';
	}
	else
	{
		while (n > 0)
		{
			str[i++] = base[n % sb];
			n /= sb;
		}
	}
	str[i] = '\0';
	return (i);
}

char	*ft_itoa_base(int n, char *base)
{
	int			i;
	int			sb;
	char		*str;

	i = 0;
	sb = 0;
	while (base[sb])
		sb++;
	str = malloc (ft_nb_digit(n, sb) * sizeof(char));
	i = ft_convert(n, str + i, base, sb);
	ft_revert(str, i);
	return (str);
}

int	ft_isspace(char str)
{
	if (str == ' ' || (str >= 9 && str <= 13))
		return (0);
	return (1);
}
