/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 13:00:53 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 13:01:10 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (index < size && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	while (src[index])
	{
		index++;
	}
	return (index);
}