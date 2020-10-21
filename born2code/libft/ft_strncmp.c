/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 00:29:45 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/21 22:11:42 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (num == 0)
		return (0);
	else if (s1 == '\0' && s2 == '\0')
		return (0);
	else if (s1 == '\0' || s2 == '\0')
		return (s1 == '\0' ? -1 : 1);
	i = 0;
	while (s1[i] && s2[i] && i < (num - 1))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
