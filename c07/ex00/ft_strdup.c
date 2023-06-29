/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:36:31 by nhan              #+#    #+#             */
/*   Updated: 2023/06/16 20:58:59 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s1;

	i = 0;
	while (src[i] != '\0')
		i++;
	s1 = (char *)malloc(i * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{	
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*i
int	main(int argc, char **argv)
{
	(void)argc;
	char	*test;

	test = ft_strdup(argv[1]);
	printf("%s\n", test);
}*/
