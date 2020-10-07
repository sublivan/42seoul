/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:33:09 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 13:23:29 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int result;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			result = 1;
		else
			return (0);
		++str;
	}
	return (result);
}
