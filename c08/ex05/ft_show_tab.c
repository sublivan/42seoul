/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:16:13 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/19 16:55:48 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_put_number(int num)
{
	if (num > 9)
		ft_put_number(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_put_number(par[index].size);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		index++;
	}
}
