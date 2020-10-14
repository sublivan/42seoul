/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:27:46 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/14 20:18:30 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)destination;
	src = (unsigned char*)source;
	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		if (src[i] == (unsigned char)c)
		{
			return (dest);
		}
		i++;
	}
	return (NULL);
}
