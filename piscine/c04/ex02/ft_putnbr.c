/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:13:16 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/19 17:21:22 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		negative(int *nb, int *nums, int *index)
{
	ft_putchar('-');
	nums[(*index)++] = (*nb % 10) * -1;
	*nb /= -10;
}

void		print_nums(int *nums, int *index)
{
	char c;

	while (*index >= 0)
	{
		c = nums[(*index)--] + 48;
		ft_putchar(c);
	}
}

void		ft_putnbr(int nb)
{
	int nums[10];
	int index;

	index = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		negative(&nb, nums, &index);
	}
	while (nb / 10 > 0)
	{
		nums[index++] = nb % 10;
		nb /= 10;
	}
	if (nb != 0)
		nums[index] = nb;
	else
		index--;
	print_nums(nums, &index);
}
