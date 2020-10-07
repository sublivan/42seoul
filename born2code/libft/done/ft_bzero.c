/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 21:09:40 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/07 21:10:29 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	unsigned char	*change_str;
	int				index;

	change_str = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		*change_str++ = 0;
		index++;
	}
	str = change_str;
	return (str);
}
