/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:37:06 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:41:42 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;
	char c;

	index = 0;
	while (str[index] != '\0')
	{
		c = *(str + index);
		if (c >= 'A' && c <= 'Z')
			str[index] = c + 32;
		index++;
	}
	return (str);
}
