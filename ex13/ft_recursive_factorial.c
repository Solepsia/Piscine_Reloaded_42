/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:06:36 by grota             #+#    #+#             */
/*   Updated: 2017/11/16 13:18:11 by grota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
