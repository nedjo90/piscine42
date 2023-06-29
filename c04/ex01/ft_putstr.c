/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:46:52 by nhan              #+#    #+#             */
/*   Updated: 2023/06/14 15:13:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_display(char *tab)
{
	write(1, tab, 1);
}

void	ft_putstr(char *str)
{
	unsigned long long	i;

	i = 0;
	while (str[i])
	{
		ft_display(&str[i]);
		i++;
	}
}
/*
int	main(int argc, char *argv[])
{
	char	*tab = argv[1];
	argc = 2;	

	printf("attendu  = \n%s\nresultat = \n", tab);
	ft_putstr(tab);
}*/
