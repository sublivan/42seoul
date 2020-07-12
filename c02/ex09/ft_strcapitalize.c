/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:57:13 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/11 12:52:55 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ch_lower(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

void  ch_upper(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int index;
	char c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (index == 0)
		{
			ch_upper(str, index);
		}
		else if (c == ' ' || c == '+')
		{
			++index;
			ch_upper(str, index);
		}
		else
			ch_lower(str, index);
		index++;
	}
	return (str);
}


