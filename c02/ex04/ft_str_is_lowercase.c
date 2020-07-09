/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:33:49 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:34:11 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int result;
	int cp;

	while (*str != '\0')
	{
		cp = *(str++);
		if (cp >= 'a' && cp <= 'z')
			  result = 1;
		else
			return 0;
	}
	return result;
}
