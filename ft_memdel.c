#include <stdlib.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

int	main()
{
	void *pointeur;

	pointeur = malloc(sizeof(int) * 10);
	ft_memdel(&pointeur);
	return 0;
}
