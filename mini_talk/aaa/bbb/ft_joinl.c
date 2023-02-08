#include "libft.h"


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if(!str)
		return(1);
	while (str[i])
		i++;
	return (i);
}


char	*ft_joinl(char const *s1, char l)
{
	char	*result;
	int		i;
	int		l1;

	if (!l)
		return (NULL);
	l1 = ft_strlen(s1);
	result = malloc((l1 + 1) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = -1;
	if(s1)
	{
		while (++i < l1)
			result[i] = s1[i];
	}
	else
		i++;
	result[i++] = l;
	result[i] = '\0';
	free ((void *)s1);
	return (result);
}

// int main (){
// 	char *ok;

// 	ok =ft_joinl(ok, 'l');
// 	printf("%s\n",ok );
// ok = ft_joinl(ok, 'm');
// 	printf("%s ", ok);
// 	free(ok);
// }