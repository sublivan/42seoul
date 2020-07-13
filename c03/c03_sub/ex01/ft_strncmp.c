/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:07:02 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/13 15:07:52 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index;

	index = 0;
	while (index <= n)
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] > s2[index])
				return (1);
			else
				return (-1);
		}
		if (s1[index] == '\0' || s2[index] == '\0')
			break;
		index++;
	}
	return (0);
}
