/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 00:25:11 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/19 00:25:47 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	total_size;

	total_size = count * size;
	if (!(result = (void *)malloc(total_size)))
		return (NULL);
	ft_bzero(result, count);
	return ((void *)result);
}
