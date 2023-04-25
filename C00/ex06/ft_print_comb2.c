/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ockap <ockap@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:26:39 by ockap             #+#    #+#             */
/*   Updated: 2023/04/24 14:25:32 by ockap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb2(int c1, int c2)
{
	char	dizaine;
	char	uni;

	dizaine = c1/10 + '0';
	uni = c1 % 10 + '0';

	ft_putchar(dizaine);
	ft_putchar(uni);
	ft_putchar(' ');
	dizaine = c2 / 10 + '0';
	uni = c2 % 10 + '0';
	ft_putchar(dizaine);
	ft_putchar(uni);

	if (c1 != 98 || c2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		c1;
	int		c2;

	c1 = -1;

	while (++c1 <= 98)
	{
		c2 = c1;
		while (++c2 <= 99)
		{
			ft_put_comb2(c1, c2);
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	return 0;
}