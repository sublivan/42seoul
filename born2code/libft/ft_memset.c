/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:58:51 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/07 21:01:05 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*change_arr;

	change_arr = (unsigned char *)ptr;
	while (num--)
	{
		*change_arr++ = (unsigned char)value;
	}
	ptr = change_arr;
	return (ptr);
}
