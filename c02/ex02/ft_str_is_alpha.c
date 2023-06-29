/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:54:34 by nhan              #+#    #+#             */
/*   Updated: 2023/06/10 19:54:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
			if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
				return (0);
		i++;
	}
	return (1);
}
/*int main(void)
{
	printf("%d", ft_str_is_alpha("dshvbjadvbjhbdv"));
}*/
