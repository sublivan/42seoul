/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:14:50 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/18 21:39:51 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_length(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

void	*mk_void_size(void)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 1);
	result[0] = 0;
	return (result);
}

char	*mk_strjoin(char *result, char **strs, int size, char *sep)
{
	char	*temp;
	int		i;

	i = 1;
	temp = ft_strcat(result, strs[0]);
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		length;
	int		i;

	i = 0;
	length = 0;
	if (size == 0)
	{
		result = mk_void_size();
		return (result);
	}
	while (i < size)
	{
		length += get_length(strs[i++]);
	}
	result = (char *)malloc(length + (size - 1) * get_length(sep) + 1);
	mk_strjoin(result, strs, size, sep);
	return (result);
}
