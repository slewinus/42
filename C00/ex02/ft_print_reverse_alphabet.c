/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ockap <ockap@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:37 by ockap             #+#    #+#             */
/*   Updated: 2023/04/19 15:05:31 by ockap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    char    c;
    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c-=1;
    }
}

int     main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}