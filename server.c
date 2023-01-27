#include "mini_talk.h"

char	*ft_cleaner(char *value)
{
	int	i;

	i = -1;
	while (value[++i])
		value[i] = 0;
	return (NULL);
}

void cheddar(int bit){
	static int	power;
	static int	letter;
	static char	*pizza;

	if (bit == SIGUSR1)
		letter += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		if (letter)
			pizza = ft_joinl(pizza,letter);
		else
			{
				ft_printf("%s",pizza);
				pizza = ft_cleaner(pizza);
			}
		power = 0;
		letter = 0;
	}
}

int main () {
   int	pid;

	pid = getpid();
	ft_printf("%d",pid);
	signal(SIGUSR1, cheddar);
	signal(SIGUSR2, cheddar);
	while (1)
		pause();
	
   return(0);
}
