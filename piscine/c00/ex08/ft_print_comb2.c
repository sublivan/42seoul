/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:33:22 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/08 15:35:16 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int n1, int n2)
{
	ft_putchar(n1 / 10 + 48);
	ft_putchar(n1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(n2 / 10 + 48);
	ft_putchar(n2 % 10 + 48);
	if(n1 + n2 != 98 + 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int     a;
	int     b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
}
