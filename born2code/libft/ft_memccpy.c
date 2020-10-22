/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:27:46 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/21 20:54:08 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t num)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	i = 0;
	while (i < num)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
