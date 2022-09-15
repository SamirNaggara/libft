#include <stdlib.h>
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	int	*pointer;
	size_t	i;

	i = 0;
	pointer = (int *)malloc(sizeof(void) * size);
	if (!pointer)
		return (NULL);
	while (i < size)
	pointer[i++] = 0;
	return (pointer);
}
/*
int	main()
{
	int	*point;
	int	i;

	i = 0;
	point = ft_memalloc(5);
	while (i < 5)
		printf("%d", point[i++]);
	return 0;
}
*/
