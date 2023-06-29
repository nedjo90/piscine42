/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:53:40 by nhan              #+#    #+#             */
/*   Updated: 2023/06/15 18:08:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_params(char **name, int n)
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

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv, i);
		i--;
	}
	return (0);
}
