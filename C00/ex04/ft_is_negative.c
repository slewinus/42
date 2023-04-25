/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ockap <ockap@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:23:59 by ockap             #+#    #+#             */
/*   Updated: 2023/04/19 15:42:49 by ockap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
        if (n < 0)
            ft_putchar('N');
        else
            ft_putchar('P');
}

int     main(void)
{
        ft_is_negative(-1);
        return (0);
}
