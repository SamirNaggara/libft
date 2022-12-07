/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:33:56 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/07 12:01:08 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *srcbis;
    char *destbis;

    srcbis = (char *)src;
    destbis = (char *)dest;

    i = 0;
    while (i < n)
    {
        destbis[i] = srcbis[i];
        i++;
    }
    return (destbis);
}
