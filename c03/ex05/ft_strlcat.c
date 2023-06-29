/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 01:41:12 by nhan              #+#    #+#             */
/*   Updated: 2023/06/13 22:36:43 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlen(char *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	i = 0;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] && dest_len < size - 1)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	if (size != 0)
		dest[dest_len] = '\0';
	return (total_len);
}
/*
int main(void)
{
	char s1[14] = "";
	char s2[] = "ksuhlakbvlibvauerbvueie";
	char s22[] = "ksuhlakbvlibvauerbvueie";
	char s11[14] = "";
	int temp = 11;
	printf("strlcat = %lu \t %s", strlcat(s1,s2,temp), s1);
	printf("\nft_strlcat = %d \t %s", ft_strlcat(s11,s22,temp), s11);
}*/
