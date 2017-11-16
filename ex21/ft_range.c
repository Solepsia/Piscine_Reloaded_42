/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:16:25 by grota             #+#    #+#             */
/*   Updated: 2017/11/16 14:11:32 by grota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		range = (int *)malloc(sizeof(int) * (max - min));
		while (i < max - min)
		{
			range[i] = min + i;
			i++;
		}
		return (range);
	}
}
