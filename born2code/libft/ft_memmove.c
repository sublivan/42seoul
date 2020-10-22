/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:28:00 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/14 16:30:25 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t num)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	i = 0;
	if (dst == src || num == 0)
		return (dest);
	if (src < dst)
	{
		while (i++ < num)
		{
			dst[num - i] = src[num - i];
		}
	}
	else
	{
		while (i++ < num)
		{
			*dst++ = *src++;
		}
	}
	return (dest);
}
