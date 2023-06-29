/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:54:40 by nhan              #+#    #+#             */
/*   Updated: 2023/06/15 21:56:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char **name)
{
	int	i;

	i = 0;
	while (name[0][i] != '\0')
	{
		write(1, &name[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print_program_name(argv);
	return (0);
}
