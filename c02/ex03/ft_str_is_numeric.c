/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:33:09 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:33:36 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	char cp;
	int result;

	while (*str != '\0')
	{
		cp = *(str++);
		if (cp >= '0' && cp <= '9')
			result = 1;
		else
			return 0;
	}
	return result;
}
