/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 13:45:29 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/11 14:25:27 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			printable(char c)
{
	if(32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
void		write_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c += 39;
	write(1, &c, 1);
}
void		print_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16); 
}

void		ft_putstr_non_printable(char *str)
{
	int index;
	char c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (!printable(c))
			print_hex(c);
		else
			write(1, &c, 1);
		index++;
	}
}
