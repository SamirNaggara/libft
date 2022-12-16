#include "libft.h"

char *ft_strdup(const char *s)
{
    char    *result;
    size_t  size;
    size_t  i;

    size = ft_strlen(s);
    result = (char *)malloc(sizeof(char) * (size + 1));
    ft_memset(result, 0, size + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = s[i];
        i++;
    }
    return (result);
}

// int main()
// {
//     char chaine[] = "voila";
//     char *resultat;

//     resultat = ft_strdup(chaine);
//     printf("%s\n", resultat);

//     free(resultat);
// }