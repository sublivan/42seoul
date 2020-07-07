/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:31:31 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/07 15:32:30 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int j;

	i = 0;
	j = size;
	while (i < j)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + j - 1);
		*(tab + j - 1) = temp;
		i++;
		j--;
	}
}
