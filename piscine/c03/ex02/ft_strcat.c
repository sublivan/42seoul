/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:10:48 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 17:59:22 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		*temp++ = *src++;
	}
	*temp = 0;
	return (dest);
}
