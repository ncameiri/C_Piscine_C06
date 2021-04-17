/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:06:09 by ncameiri          #+#    #+#             */
/*   Updated: 2020/11/04 12:30:33 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int a;
	int i;

	i = 0;
	a = argc;
	while (a > 1)
	{
		while (argv[a - 1][i] != '\0')
		{
			write(1, &argv[a - 1][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
