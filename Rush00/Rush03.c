/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 21:19:32 by minhkim           #+#    #+#             */
/*   Updated: 2020/07/04 21:47:33 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		make_col(int x, char *input)
{
	int	col;

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

void		make_row(int x, int y)
{
	int row;

	row = 0;
	char *input;
	input = "ACBB ";
	while (row < y)
	{
		if (row == 0 || row == y - 1)
			make_col(x, input);
		else
			make_col(x, &input[2]);
		row++;
	}
}

void		rush(int x, int y)
{
	make_row(x, y);
}
