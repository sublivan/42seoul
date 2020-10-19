/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:03:31 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/21 10:12:34 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		word_count(char *str, char *charset)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	if (str[i] && !is_charset(str[i], charset))
	{
		i++;
		cnt++;
	}
	while (str[i] != 0)
	{
		if (is_charset(str[i], charset) == 1)
		{
			if (str[i + 1] && (is_charset(str[i + 1], charset) == 0))
				cnt++;
		}
		i++;
	}
	return (cnt);
}

char	*ft_strdup(char *str, int n)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * (n + 1));
	temp[n] = '\0';
	i = 0;
	while (i < n)
	{
		temp[i] = str[i];
		i++;
	}
	return (temp);
}

char	**ft_charset(char **result, char *str, char *charset)
{
	int i;
	int start;
	int cnt;

	i = 0;
	cnt = 0;
	start = 1;
	if (str[i] && (is_charset(str[i], charset) == 0))
	{
		start = i;
		i++;
	}
	while (str[i])
	{
		if (is_charset(str[i], charset))
		{
			if (start < i)
				result[cnt++] = ft_strdup(str + start, i - start);
			start = i + 1;
		}
		i++;
	}
	if (start < i)
		result[cnt++] = ft_strdup(str + start, i - start);
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		len;
	int		cnt;

	len = 0;
	while (str[len])
		len++;
	if (charset[0] == 0)
	{
		result = (char **)malloc(sizeof(char *) * 2);
		result[0] = ft_strdup(str, len);
		result[1] = 0;
		return (result);
	}
	cnt = word_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (cnt + 1));
	result[cnt] = 0;
	ft_charset(result, str, charset);
	return (result);
}
