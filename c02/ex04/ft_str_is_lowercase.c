/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:03:34 by nhan              #+#    #+#             */
/*   Updated: 2023/06/11 15:44:01 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
