/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 00:29:45 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/19 00:29:46 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && i < num)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	if (i < num)
	{
		return (str1[i] - str2[i]);
	}
	return (0);
}
