/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:22:40 by aismail           #+#    #+#             */
/*   Updated: 2020/06/26 15:23:20 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int k;
	int c;

	k = ac;
	while (--k > 0)
	{
		c = -1;
		while (av[k][++c])
			ft_putchar(av[k][c]);
		ft_putchar('\n');
	}
	return (0);
}


