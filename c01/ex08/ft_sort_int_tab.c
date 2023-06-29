/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:34:30 by nhan              #+#    #+#             */
/*   Updated: 2023/06/10 15:54:07 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (*(tab + min) > *(tab + j))
				min = j;
			j++;
		}
		if (i != min)
			ft_swap(tab + i, tab + min);
		i++;
	}
}
/*
int main(void)
{
	int tab[10] = {9,5,7,4,255,3,-2,1,5,0};
	int *p = tab;
	int size = 10;
	printf("Avant le trie : ");
	for(int i = 0; i < size; i++)
	{
		printf("%d - ", *(tab+i));
	}
	ft_sort_int_tab(p, size);
	printf("\nApres le trie : ");
	for(int i = 0; i < size; i++)
	{
		printf("%d - ", *(tab+i));
	}
}*/
