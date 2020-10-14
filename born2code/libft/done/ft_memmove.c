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

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)destination;
	src = (unsigned char*)source;
	i = 0;
	if (dest == src || num == 0)
		return (destination);
	if (src < dest)
	{
		while (i++ < num)
		{
			dest[num - i] = src[num - i];
		}
	}
	else
	{
		while (i++ < num)
		{
			*dest++ = *src++;
		}
	}
	return (destination);
}
