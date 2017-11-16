/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:11:38 by grota             #+#    #+#             */
/*   Updated: 2017/11/11 17:30:00 by grota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
