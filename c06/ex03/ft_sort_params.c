/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:41:37 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 17:46:29 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void		sort(int ac, char *str[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_strcmp(str[j - 1], str[j]) > 0)
			{
				temp = str[j - 1];
				str[j - 1] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int ac, char **av)
{
	int i;

	if (ac > 2)
	{
		sort(ac, av);
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
