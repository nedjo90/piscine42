/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:56:59 by nhan              #+#    #+#             */
/*   Updated: 2023/06/09 09:44:51 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int a = 12;
	int b = 6;
	int a_div_b;
	int a_mod_b;
	int *div = &a_div_b;
	int *mod = &a_mod_b;
	ft_div_mod(a,b,div,mod);
	printf("division = %d\nmodulo = %d", a_div_b, a_mod_b);
}*/
