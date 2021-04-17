/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:23:41 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/04 12:13:25 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (++j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i++]);
		}
		i = 0;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		a2;
	char	*aux;

	a = 1;
	while (a < argc)
	{
		a2 = 1;
		while (a2 < argc)
		{
			if (ft_strcmp(argv[a], argv[a2]) < 0)
			{
				aux = argv[a];
				argv[a] = argv[a2];
				argv[a2] = aux;
			}
			a2++;
		}
		a++;
	}
	ft_print_params(argc, argv);
	return (0);
}
