/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:39:19 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/08 13:20:44 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int alphabet;

	alphabet = 122;
	while (alphabet > 96)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
