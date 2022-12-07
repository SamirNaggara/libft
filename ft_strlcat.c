/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:51:30 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/07 18:08:14 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t i;

    if (size < ft_strlen(dest))
        return (size + ft_strlen(src));
    dest_len = ft_strlen(dest);
    i = 0;
    if (!src)
        return (dest_len + ft_strlen(src));
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] && i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    while (dest[i] && i < size)
    {
        dest[dest_len + i] = '\0';
        i++;
    }
    return (dest_len + ft_strlen(src));
}