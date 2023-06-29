/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:43:13 by nhan              #+#    #+#             */
/*   Updated: 2023/06/13 11:33:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(char *str, char *to_find)
{
	unsigned long long	j;

	j = 0;
	while (*(to_find + j) != '\0')
	{
		if (*(str + j) != *(to_find + j))
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned long long	i;
	int					j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == *to_find)
		{
			j = ft_find(str + i, to_find);
			if (j == 1)
				return (str + i);
		}
		i++;
	}
	return (0);
}
