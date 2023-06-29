/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:37:26 by nhan              #+#    #+#             */
/*   Updated: 2023/06/14 12:45:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	char *tab = "safdkljvbaslkvbliu";
	int i = ft_strlen(tab);
	int j = strlen(tab);
	printf("strlen = %d\nft_strlen = %d", j, i);
}*/
