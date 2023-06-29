/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:49:47 by nhan              #+#    #+#             */
/*   Updated: 2023/06/09 09:47:37 by nhan             ###   ########.fr       */
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
/*int main(void)
{
	int x = 1;
	int y = 100;
	printf("avant le swap x = %d y = %d\n", x, y);
	int *a = &x;
	int *b = &y;
	ft_swap(a,b);
	printf("apres le swap x = %d y = %d\n", x, y);
}*/
