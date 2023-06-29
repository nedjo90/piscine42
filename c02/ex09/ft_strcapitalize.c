/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:07:36 by nhan              #+#    #+#             */
/*   Updated: 2023/06/11 12:51:44 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}

char	ft_lowercase(char c)
{
	c = c - 'A' + 'a';
	return (c);
}

int	ft_test(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (str[i] != '\0')
	{
		if (d == 0)
		{
			str[i] = ft_uppercase(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ft_lowercase(str[i]);
		}
		d = ft_test(str[i]);
		i++;
	}
	return (str);
}
