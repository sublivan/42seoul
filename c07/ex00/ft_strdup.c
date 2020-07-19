/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:58:21 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/19 13:33:54 by minsukim         ###   ########.fr       */
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
