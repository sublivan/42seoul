/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:13:15 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/18 19:14:29 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *dest;
	int index;
	int length;

	if (min >= max)
		return (0);
	length = max - min;
	dest = (int *)malloc(sizeof(int) * length);
	index = 0;
	while (index < length)
	{
		dest[index] = min + index;
		index++;
	}
	return (dest);
}
