/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ockap <ockap@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:42:17 by ockap             #+#    #+#             */
/*   Updated: 2023/04/25 15:05:26 by ockap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 5;
	b = 3;
	ft_div_mod (a, b, &div, &mod);
	return (0);
}
