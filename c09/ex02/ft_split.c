/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:33:31 by nhan              #+#    #+#             */
/*   Updated: 2023/06/26 23:34:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_issep(char c, char *sep)
{
	int	i;

	i = 0;
	if (*sep == 0)
		return (0);
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_nbsplit(char *str, char *charset)
{
	int	i;
	int	tracker;
	int	nbsplit;

	i = 0;
	tracker = 0;
	nbsplit = 0;
	while (str[i])
	{
		if (tracker == 0 && ft_issep(str[i], charset) == 0)
		{
			nbsplit ++;
			tracker = 1;
		}
		else if (tracker == 1 && ft_issep(str[i], charset) == 1)
				tracker = 0;
		i++;
	}
	if (i == 0)
		i++;
	return (nbsplit + 1);
}

char	*ft_strdup(char *str, int size)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(size * sizeof(char));
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_split_string(char *str, char *charset)
{
	int	i;

	i = 0;
	while (ft_issep(str[i], charset) == 0 && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = (char **) malloc (ft_nbsplit(str, charset) * sizeof(char *));
	while (str[i])
	{
		if (ft_issep(str[i], charset) == 0)
		{
			split[j] = ft_strdup(str + i, ft_split_string(str + i, charset));
			i += ft_split_string(str + i, charset);
			j++;
		}
		else if (ft_issep(str[i], charset) == 1)
			i++;
	}
	split[j] = 0;
	return (split);
}
/*
int	main(int argc, char **argv)
{
	char **str;
	int	i;

	if (argc != 3)
		return (-1);
	i = 0;
	printf("%s\n\n", argv[1]);
	printf("Avec le separateur ===>>> \"%s\"\n\n", argv[2]);	
	str = ft_split(argv[1], argv[2]);
	while(str[i] != 0)
	{
		printf("Chaine %d=========>>>>%s\n",i, str[i]);
		i++;
	}
	printf("Chaine %d=========>>>>%s\n",i, str[i]);
	return (0);	
}*/
