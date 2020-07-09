/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:36:07 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:36:22 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int result;
	int cp;

	if (*str == '\0')
		return 1;
	while (*str != '\0')
	{
		if (cp >= 33 & cp <= 126)
			result = 1;
		else
			return 0;
	}
	return result;
}