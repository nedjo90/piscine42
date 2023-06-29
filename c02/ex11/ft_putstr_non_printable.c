/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:44:47 by nhan              #+#    #+#             */
/*   Updated: 2023/06/13 23:21:16 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_type(char c)
{
	int	i;

	i = 0;
	if (c >= ' ' && c <= '~')
		return (0);
	return (1);
}

void	ft_display(char c)
{
	write(1, &c, 1);
}

void	ft_non_printable(unsigned char n)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[n / 16], 1);
	write(1, &base[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	t;

	i = 0;
	while (*(str + i) != '\0')
	{
		t = ft_type(*(str + i));
		if (t == 0)
			ft_display(*(str + i));
		else
			ft_non_printable((unsigned char)str[i]);
		i++;
	}
}
