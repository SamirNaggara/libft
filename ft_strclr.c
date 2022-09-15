#include <stdio.h>

void	ft_strclr(char *s)
{
	while (*s)
		*(s++) = '\0';
}
/*
int	main()
{
	char chaine[] = "Salut";
	ft_strclr(chaine);
	printf("%s\n", chaine);
}
*/
