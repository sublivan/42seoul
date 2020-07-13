/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:12:14 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 15:23:18 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int index;

	index = 0;
	while (*dest)
	{
		++dest;
	}
	while (index < nb)
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (dest);
}
