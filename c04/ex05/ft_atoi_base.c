/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:13:56 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 10:28:36 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		vaild(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\t' || base[i] == '\f'
			|| base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		get_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		is_space(char *str)
{
	return (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ');
}

int		atoi_get_int(char c, char *base)
{
	int index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int length;
	int sign;
	int result;
	int change;

	if (!vaild(base))
		return (0);
	sign = 1;
	result = 0;
	length = get_length(base);
	while (is_space(str) != 0)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while ((change = atoi_get_int(*str++, base)) != -1)
	{
		result *= length;
		result += change;
	}
	return (result * sign);
}
