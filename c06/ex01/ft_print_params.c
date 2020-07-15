/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:40:39 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 17:41:00 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int ac, char **av)
{
	int index;

	if (ac > 1)
	{
		index = 1;
		while (index < ac)
		{
			ft_putstr(av[index]);
			write(1, "\n", 1);
			index++;
		}
	}
}
