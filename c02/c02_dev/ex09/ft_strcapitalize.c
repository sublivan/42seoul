/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:57:13 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/11 21:01:04 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		is_change(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	if (c >= 'a' && c <= 'z' )
		return (0);
	if (c >= 'A' && c <= 'Z' )
		return (0);
	return (1);
}

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
	while(str[index])
	{
		ch_lower(str, index++);

	}
	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if(index == 0)
			ch_upper(str, index);
		if (is_change(c) == 1)
		{
			ch_upper(str, ++index);
		}
		else
			index++;
	}
	return (str);
}
