/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orobert-b <orobert-b@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:14:34 by ockap             #+#    #+#             */
/*   Updated: 2023/04/22 22:35:47 by orobert-b        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
	if (c1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0' - 1;
	while (++c1 <= '7')
	{
		c2 = c1;
		while (++c2 <= '8')
		{
			c3 = c2;
			while (++c3 <= '9')
				ft_putcomb(c1, c2, c3);
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
