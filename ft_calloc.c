#include "libft.h"


void *ft_calloc(size_t nmemb, size_t size)
{

    void *mem;

    if (size == 0 || nmemb == 0)
        return (NULL);
    if (size > 2147483647 || nmemb > 2147483647 || nmemb * size >= 2147483647)
        return (NULL);
    mem = malloc(nmemb * size);
    if (!mem)
        return (NULL);
    ft_memset(mem, 0, nmemb * size);
    return (mem);
}

