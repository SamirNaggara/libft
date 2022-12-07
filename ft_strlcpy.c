/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:42:58 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/07 15:53:50 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    printf("Size : %d\n", size < 0);

    i = 0;
    if (size <= 0)
        return (ft_strlen(src));
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    while (dest[i] && i < size)
        dest[i++] = '\0';
    return (ft_strlen(src));
}


int main()
{
    char src[] = "Samir";
    char dest[] = "Voila";
    printf("%ld\n", ft_strlcpy(dest, src, -1));
    printf("%s\n", dest);
}