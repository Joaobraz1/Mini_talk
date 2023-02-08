/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-o <jpedro-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:01:20 by jpedro-o          #+#    #+#             */
/*   Updated: 2023/02/08 18:32:21 by jpedro-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

char	*ft_cleaner(char *value)
{
	int	i;

	i = -1;
	while (value[++i])
		value[i] = 0;
	return (NULL);
}

void	cheddar(int bit)
{
	static int	power;
	static int	letter;
	static char	*pizza;
	static int	pid;

	if (bit == SIGUSR1)
		letter += 1 << (7 - power);
	power++;
	if (pid)
		kill(pid, SIGUSR1);
	if (power == 8)
	{
		if (letter)
			pizza = ft_joinl(pizza, letter);
		else
		{
			if (!pid)
				pid = ft_atoi(pizza);
			else
			{
				ft_printf("%s", pizza);
				pid = 0;
			}
			pizza = ft_cleaner(pizza);
		}
		power = 0;
		letter = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("%d", pid);
	signal(SIGUSR1, cheddar);
	signal(SIGUSR2, cheddar);
	while (1)
		pause();
	return (0);
}
