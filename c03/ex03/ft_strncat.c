/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:12:14 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/14 17:38:27 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp;

	temp = dest;
	while (*temp)
	{
		++temp;
	}
	while (nb > 0 && *src)
	{
		*temp++ = *src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
