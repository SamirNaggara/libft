#include <stdio.h>
#include <stdlib.h>
int	ft_strequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	while ((s1[i] || s2[i]) && i < n )
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);

}
/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d\n", ft_strequ(argv[1], argv[2], atoi(argv[3])));
	return 0;
}
*/
