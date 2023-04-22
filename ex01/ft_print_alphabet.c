/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ockap <ockap@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:57:03 by ockap             #+#    #+#             */
/*   Updated: 2023/04/19 15:00:36 by ockap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    c;
    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c+=1;
    }
}

int     main(void)
{
    ft_print_alphabet();
    return (0);
}