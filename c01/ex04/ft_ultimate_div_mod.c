/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:35:02 by nhan              #+#    #+#             */
/*   Updated: 2023/06/09 09:44:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*int main(void)
{
	int x = 102;
	int y = 10;
	int *a = &x;
	int *b = &y;
	printf("avant la fonction x = %d y = %d", x, y);
	ft_ultimate_div_mod(a, b);
	printf("apres la fonction x = %d y = %d", x, y);
}*/
