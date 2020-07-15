/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:37:51 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 10:42:50 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			vaild(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void		putnbr_base_recursive(int n, char *base, int len)
{
	if (n == -2147483648)
	{
		putnbr_base_recursive(n / len, base, len);
		ft_putchar((base[-(n % len)]));
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		putnbr_base_recursive(-n, base, len);
		return ;
	}
	if (n > len - 1)
	{
		putnbr_base_recursive(n / len, base, len);
	}
	ft_putchar((base[n % len]));
}

int			get_length(char *base)
{
	int		index;

	index = 0;
	while (base[index] != '\0')
	{
		index++;
	}
	return (index);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		length;

	if (!vaild(base))
		return ;
	length = get_length(base);
	putnbr_base_recursive(nbr, base, length);
}
