/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:10:48 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 14:11:57 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		++dest;
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (dest);
}
