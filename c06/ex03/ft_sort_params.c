/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:09:15 by nhan              #+#    #+#             */
/*   Updated: 2023/06/17 22:59:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print_params(char **name, int n)
{
	int	i;

	i = 0;
	while (name[n][i] != '\0')
	{
		write(1, &name[n][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && s1[i] && s2[i])
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort(int n, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(&argv[i][0], &argv[j][0]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_print_params(argv, i);
		i++;
	}
}
