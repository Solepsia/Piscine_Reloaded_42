/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:34:44 by grota             #+#    #+#             */
/*   Updated: 2017/11/11 18:02:34 by grota            ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		sorted;

	sorted = 0;
	while (sorted != 1)
	{
		i = 1;
		sorted = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str;
				sorted = 0;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
