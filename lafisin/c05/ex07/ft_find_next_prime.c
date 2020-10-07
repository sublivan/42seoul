/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:42:29 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/18 14:35:43 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		prime_check(int nb)
{
	int check;
	long long i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (nb <= 1)
			return (2);
		//if (nb == 2147483630)
		//	return (2147483647);
		if (prime_check(nb))
			return (nb);
		nb += 1;
	}
}