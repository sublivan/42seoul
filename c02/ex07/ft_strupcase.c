/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:36:46 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:36:48 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;
	char c;
	
	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (c>= 'a' && c<= 'z')
		   str[index] = c - 32;
		index++;	
	}
	return (str);
}
