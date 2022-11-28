/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:51:30 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 15:28:32 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dest);
    size_t i;

    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    while (i < size)
    {
        dest[dest_len + i] = '\0';
        i++;
    }
    return (dest_len + ft_strlen(src));
}