/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:36:07 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 15:44:03 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int result;
	int cp;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		cp = *str;
		if (cp >= 32 & cp <= 126)
			result = 1;
		else
			return (0);
		++str;
	}
	return (result);
}
