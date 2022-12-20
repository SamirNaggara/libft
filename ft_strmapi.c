#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char)){
    char            *result;
    size_t          size;
    unsigned int    i;

    size = ft_strlen(s);
    result = malloc(sizeof(char) * (size + 1));
    if (!result)
        return (NULL);
    ft_memset(result, 0, size + 1);
    i = 0;
    while (s[i])
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

