/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:34:19 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 15:04:16 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char    *s1bis;
    char    *s2bis;

    s1bis = (char*)s1;
    s2bis = (char*)s2;

    i = 0;
    while (i < n)
    {
        if (s1bis[i] != s2bis[i])
            return (s1bis[i] - s2bis[i]);
        i++;
    }
    if (s1bis[i] != s2bis[i] && i < n)
        return (s1bis[i] - s2bis[i]);
    return (0); 
}