#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    size_t    size;

    if (!s1 && !s2)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2);
    result = malloc(sizeof(char) * (size + 1));
    if (!result)
        return (NULL);
    ft_memset(result, 0, size + 1);
    ft_strlcat(result, s1, ft_strlen(s1) + 1);
    ft_strlcat(result, s2, size + 1);
    return (result);
}


// int main(int ac, char **av)
// {
//     printf("%s\n", ft_strjoin(av[1], av[2]));
// }