/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeelee <yeelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:02:53 by yeelee            #+#    #+#             */
/*   Updated: 2022/01/09 17:02:56 by yeelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static int	g_row;
static int	g_col;

char	map_position_to_char(int col, int row)
{
	if (row == 0)
	{
		if (col == 0)
			return ('A');
		else if (col == g_col - 1)
			return ('C');
		else
			return ('B');
	}
	else if (row == g_row - 1)
	{
		if (col == 0)
			return ('C');
		else if (col == g_col - 1)
			return ('A');
		else
			return ('B');
	}
	else
	{
		if (col == 0 || col == g_col - 1)
			return ('B');
		else
			return (' ');
	}
}

void	rush(int x, int y)
{
	int		row;
	int		col;
	char	buf;

	g_row = y;
	g_col = x;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			buf = map_position_to_char(col, row);
			ft_putchar(buf);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
