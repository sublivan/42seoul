/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:47:40 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/08 13:29:07 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				if (a[0] == '7')
					write(1, a, 3);
				else
					write(1, a, 5);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
