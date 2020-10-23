/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:51:43 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 13:54:17 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int check;
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	check = nb / 2;
	while (i <= check)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
