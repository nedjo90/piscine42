/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:22:24 by nhan              #+#    #+#             */
/*   Updated: 2023/06/12 11:14:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = size - 1;
	k = size / 2;
	j = 0;
	while (j < k)
	{
		ft_swap(tab + j, tab + i);
		i--;
		j++;
	}
}
/*int main (void)
{
	int str[]={0,1425,15,2,35788,10,4,514545,6545,7,151458,91655};
	int taille = 12;
	ft_rev_int_tab(str,taille);
	for ( int i = 0; i < taille; i++)
	{
		printf("%d - ", str[i]);
	}
}*/
