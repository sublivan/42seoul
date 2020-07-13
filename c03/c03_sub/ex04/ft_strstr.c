/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:13:21 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 18:50:52 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		while (to_find[i] && str[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		else
			i = 0;
		++str;
	}
	return (0);
}
