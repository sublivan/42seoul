/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:58:21 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/18 19:04:23 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		index;

	if (src[0] == 0)
		return (0);
	index = 0;
	temp = (char*)malloc(get_length(src) * sizeof(char) + 1);
	while (src[index])
	{
		temp[index] = src[index];
		index++;
	}
	temp[index] = '\0';
	return (temp);
}
