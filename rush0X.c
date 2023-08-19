/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcouto-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:09:19 by gcouto-f          #+#    #+#             */
/*   Updated: 2023/08/19 12:06:12 by gcouto-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"


void rush(int x, int y)
{
	int		xx;
	int 	yy;

	xx = 1;
	yy = 1;

	if (x<= 0 || y <= 0)
	{
	write(1, "Nao foi possivel desenhar", 26);
	}

	while(yy <= y)
	{
	xx = 1;	
	while (xx <= x)
	{
	if
		(xx == 1 && yy == 1)
	{
		ft_putchar('A');
	}
	else if
		(yy == 1 && xx == x)
	{
		ft_putchar('C');
	}
	else if
		(xx == 1 && yy == y)
	{
		ft_putchar('C');
	}
	else if
		(xx == x && yy == y)
	{
		ft_putchar('A');
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
	
}
}


