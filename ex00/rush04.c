/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dadantas <dadantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:09:19 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/08/19 16:25:31 by dadantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

void	ft_write_square(int x, int y)
{
	int	cord_x;
	int	cord_y;

	cord_y = 1;
	while (cord_y <= y)
	{
		cord_x = 1;
		while (cord_x <= x)
		{
			if ((cord_x == 1 && cord_y == 1) || (cord_x == x && cord_y == y))
				ft_putchar('A');
			else if ((cord_y == 1 && cord_x == x)
				|| (cord_x == 1 && cord_y == y))
				ft_putchar('C');
			else if (cord_y == 1 || cord_x == 1 || cord_y == y || cord_x == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cord_x++;
		}
		cord_y++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative numbers and 0 are not allowed.", 39);
		return ;
	}
	ft_write_square (x, y);
}
