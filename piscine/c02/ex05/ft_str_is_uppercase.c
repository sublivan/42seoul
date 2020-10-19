/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:35:32 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 11:28:38 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int result;
	int cp;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		cp = *(str++);
		if (cp >= 'A' && cp <= 'Z')
			result = 1;
		else
			return (0);
	}
	return (result);
}
