/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:20:48 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/14 17:20:48 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char*)ptr;
	i = 0;
	while (i < num)
	{
		if (s[i] == (unsigned char)value)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
