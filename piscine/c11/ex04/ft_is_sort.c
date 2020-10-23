/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:42:51 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/22 13:59:10 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int k;
	int tmp;

	k = 0;
	while (length-- > 1)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue;
		if (k == 0)
			k = tmp;
		else if ((k < 0 && tmp > 0) || (k > 0 && tmp < 0))
			return (0);
	}
	return (1);
}
