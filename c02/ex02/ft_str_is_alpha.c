/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:32:01 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 11:17:35 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	char cp;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		cp = *(str++);
		if (!(cp >= 'a' && cp <= 'z') && !(cp >= 'A' && cp <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}
