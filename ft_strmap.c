#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *ptr);

void	ft_strmap(char const *s, char (*f)(char))
{
	while (*s)
		f(s++);
}

char	ft_putchar(char *ptr)
{
	write(1, ptr, 1);
}

int	main()
{
	char chaine[] = "Salut";
	ft_striter(chaine, &ft_putchar);
}
