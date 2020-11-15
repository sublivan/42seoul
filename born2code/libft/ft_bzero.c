/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:24:02 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 13:24:02 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*change_str;
	size_t			index;

	change_str = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		change_str[index] = 0;
		index++;
	}
	return (str);
}
