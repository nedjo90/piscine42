/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:44:11 by nhan              #+#    #+#             */
/*   Updated: 2023/06/20 18:02:24 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_count(char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (sep[i] != '\0')
	{	
		i++;
		count++;
	}
	return (count);
}

char	*ft_memory(char **strs, int size, int count)
{
	int		i;
	int		j;
	char	*joinstr;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		count += j;
		i++;
	}
	joinstr = malloc((count + 1) * sizeof(char));
	return (joinstr);
}

int	ft_copy_sep(char *joinstr, char *sep, int n)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		joinstr[n] = sep[j];
		n++;
		j++;
	}
	return (n);
}

void	ft_copy(char **strs, char *joinstr, char *sep, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			joinstr[n] = strs[i][j];
			j++;
			n++;
		}
		if (i < size - 1)
			n = ft_copy_sep(joinstr, sep, n);
		else
			joinstr[n] = '\0';
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*joinstr;

	if (size == 0)
	{
		joinstr = (char *)malloc (sizeof (char));
		*joinstr = '\0';
		return (joinstr);
	}
	count = ft_count(sep) * size;
	joinstr = ft_memory(strs, size, count);
	ft_copy(strs, joinstr, sep, size);
	return (joinstr);
}
/*
int main(void)
{
	char **join;

	join = malloc (sizeof(char *) * 2);
	char str1[] = "Jee super";
	char str2[] = "Un phrase";
	join[0] = str1;
	join[1] = str2;
    char *str = ft_strjoin(2, join, ";");
	printf("%s", str);
	return (0);
}*/
