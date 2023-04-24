/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orobert-b <orobert-b@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:45:26 by orobert-b         #+#    #+#             */
/*   Updated: 2023/04/22 23:12:04 by orobert-b        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long long	calcul(unsigned int n)
{
	long long	p;
	
	p = 1;
	while ((long long)n/p >= (long long) 10)
	{
		p *= 10;
	}
	return (p);
}

void	ft_putnbr(int n)
{
	unsigned int	abs_n;
	long long		p;

	if (n < 0)
	{
		ft_putchar('-');
		abs_n = n *- 1;
	}
	else
		abs_n = (unsigned int) n;
	p = calcul(abs_n);
	while (p > 0)
	{
		ft_putchar(abs_n/p + '0');
		abs_n = abs_n % p;
		p /= 10;
	}	
	
}


int	main(void)
{
	ft_putnbr(55887441);
	return (0);
}