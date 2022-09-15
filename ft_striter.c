#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *ptr);

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}

void	ft_putchar(char *ptr)
{
	write(1, ptr, 1);
}

int	main()
{
	char chaine[] = "Salut";
	ft_striter(chaine, &ft_putchar);
}
