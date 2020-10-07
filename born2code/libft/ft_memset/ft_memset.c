/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:58:51 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/07 17:11:50 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	change_value;
	char			*change_arr;

	change_value = (unsigned char)value;
	*change_arr = (char*)ptr;
	while (num--)
	{
		*change_arr++ = change_value;
	}
	ptr = change_arr;
	return (ptr);
}
