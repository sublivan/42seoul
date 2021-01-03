/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:36:44 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 13:36:44 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	while (num--)
	{
		if (*(unsigned char*)ptr == (unsigned char)value)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
