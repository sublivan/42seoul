/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:14:39 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/18 19:15:42 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long long	length;
	long long	index;
	int			*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	length = max - min;
	temp = (int*)malloc(sizeof(int) * length);
	if (temp == 0)
		return (-1);
	index = 0;
	while (index < length)
	{
		temp[index] = min + index;
		index++;
	}
	*range = temp;
	return ((int)length);
}
