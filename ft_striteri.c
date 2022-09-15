#include <stdio.h>
#include <unistd.h>

void	ft_putchar(unsigned int index, char *ptr);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
		f(i++, s);
}

void	ft_putchar(unsigned int index, char *ptr)
{
	if (index == 3)
		index = 4;
	write(1, ptr + index, 1);
}

int	main()
{
	char chaine[] = "Salut";
	ft_striteri(chaine, &ft_putchar);
}
