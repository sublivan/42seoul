/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:13:21 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 15:14:31 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (*to_find == 0)
		return (0);
	while (*str)
	{
		while (to_find[i] && *a == to_find[i])
		{
			++a;
			++i;
			if (to_find[i] == '\0')
				return (to_find);
			else
				i = 0;
			++str;
		}
	}
	return (0);
}
