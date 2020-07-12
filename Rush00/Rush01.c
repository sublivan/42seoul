/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhkim <minhkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 15:23:38 by minhkim           #+#    #+#             */
/*   Updated: 2020/07/05 15:23:44 by minhkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		make_col(int x, char *input)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
			ft_putchar(input[0]);
		else if (col == x - 1)
			ft_putchar(input[1]);
		else
			ft_putchar(input[2]);
		col++;
	}
	ft_putchar('\n');
}

void		make_row(int x, int y, char *input)
{
	int row;

	row = 0;
	while (row < y)
	{
		if (row == 0)
			make_col(x, input);
		else if (row == y - 1)
			make_col(x, &input[5]);
		else
			make_col(x, &input[2]);
		row++;
	}
}

void		rush(int x, int y)
{
	make_row(x, y, "/\\** \\/*");
}
