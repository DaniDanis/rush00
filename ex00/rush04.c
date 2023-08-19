/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:09:19 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/08/19 14:09:53 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c);

void	ft_adicionarchar(int xx, int x, int y, int yy)
{
	while (xx <= x)
	{
		if ((xx == 1 && yy == 1) || (xx == x && yy == y))
		{
			ft_putchar('A');
		}
		else if ((yy == 1 && xx == x) || (xx == 1 && yy == y))
		{
			ft_putchar('C');
		}
		else if (yy == 1 || xx == 1 || yy == y || xx == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		xx++;
	}
}

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	if (x <= 0 || y <= 0)
	{
		write(1, "Os números indicados não são válidos. Fim do programa.", 58);
		return ;
	}
	yy = 1;
	while (yy <= y)
	{
		xx = 1;
		ft_adicionarchar(xx, x, y, yy);
		yy++;
		ft_putchar('\n');
	}
}
