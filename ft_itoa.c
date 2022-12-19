#include "libft.h"

int ft_get_len(int n);

int	ft_power(int nb, int power);

char    *ft_itoa(int n)
{
    char    *result;
    int     number;
    int     i;
    int     len;

    i = 0;
    number = n;
    len = ft_get_len(number);
    result = (char *)malloc(sizeof(char) * (len + 2));
    ft_memset(result, 0, len + 2);

    if (n < 0)
    {
        result[i] = '-';
        number = -n;
        i++;
    }
    
    while(len > 0)
    {
        result[i] = number / (ft_power(10, len - 1)) + '0';
        number = number % (ft_power(10, len - 1));
        i++;
        len--;
    }
    result[i] = '\0';
    return (result);
    
}



int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power == 2)
		return (nb * nb);
	return (nb * ft_power(nb, power - 1));
}

int ft_get_len(int n)
{
    int i;
    int n_copy;

    n_copy = n;
    if (n < 0)
        n_copy = -n;
    i = 1;
    while (n_copy > 10)
    {
        n_copy = n_copy / 10;
        i++;
    }
    return (i);
}
/*
int main(int ac, char **av)
{
    if (ac)
    {
        printf("ft itoi : %s\n", ft_itoa(0));
        printf("ft itoi : %s\n", ft_itoa(4));
        printf("ft itoi : %s\n", ft_itoa(7));
        printf("ft itoi : %s\n", ft_itoa(-9));
        printf("ft itoi : %s\n", ft_itoa(12));
        printf("ft itoi : %s\n", ft_itoa(53));
        printf("ft itoi : %s\n", ft_itoa(356));
        printf("ft itoi : %s\n", ft_itoa(-5247));
    }
}
*/

