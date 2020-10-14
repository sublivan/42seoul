/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 21:06:31 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/14 21:06:32 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)character)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
