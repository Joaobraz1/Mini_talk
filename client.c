/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-o <jpedro-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:46:49 by jpedro-o          #+#    #+#             */
/*   Updated: 2023/02/10 15:52:01 by jpedro-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	chessburger(int bacon)
{
	(void)bacon;
}

int	main(int honc, char **honey)
{
	int	client;

	if (honc != 3)
		return (1);
	(void)honc;
	client = getpid();
	signal(SIGUSR1, chessburger);
	ft_melt(ft_atoi(honey[1]), ft_itoa(client), 100);
	ft_melt(ft_atoi(honey[1]), honey[2], 1000);
	return (0);
}
