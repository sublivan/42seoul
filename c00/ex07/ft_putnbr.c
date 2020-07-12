/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 21:52:07 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/08 13:31:14 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	p_negative(int *nb, int *num, int *index)
{
	ft_putchar('-');
	num[(*index)++] = (*nb % 10) * -1;
	*nb /= -10;
}

void	ft_print(int *num, int *index)
{
	char c;

	while (*index >= 0)
	{
		c = num[(*index)--] + 48;
		ft_putchar(c);
	}
}

void	ft_putnbr(int nb)
{
	int arr[10];
	int index;

	index = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		p_negative(&nb, arr, &index);
	}
	while (nb / 10 > 0)
	{
		arr[index++] = nb % 10;
		nb /= 10;
	}
	if (nb != 0)
		arr[index] = nb;
	else
		index--;
	ft_print(arr, &index);
}
