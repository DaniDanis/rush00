/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:09:19 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/08/19 12:46:55 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush0X.c"

void rush(int x, int y)
{
	int		xx;//xx é a coluna
	int 	yy;//yy é a linha

	if (x<= 0 || y <= 0)//tratamento de erro
	{
	write(1, "Os números indicados não são válidos. Fim do programa.", 58);
	x =0;
	y =0;
	}

	yy = 1;
	
	while(yy <= y)//inicio lógica
	{
	xx = 1;	
	while (xx <= x)
	{
	if
		((xx == 1 && yy == 1) ||(xx == x && yy == y))
	{
		ft_putchar('A');
	}
	else if
		((yy == 1 && xx == x) || (xx == 1 && yy == y))
	{
		ft_putchar('C');
	}
	
	else if
		(yy == 1 || xx == 1 || yy == y || xx == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	
	}

	if (xx == x){
		yy++;
		ft_putchar('\n');
	}
	xx++;
	}
	
}//fim lógica
}


