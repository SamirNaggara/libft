/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:37:22 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 14:57:23 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    if (!*little)
        return ((char *)big);
    while (*big)
    {
        if (*big == *little)
        {
            i = 0;
            
            while (little[i] && big[i] == little[i])
            {
                i++;
                if (i == len)
                    break ;
            }
            if (!little[i] || i == len)
                return ((char *)big);
        }
        big++;
    }
    return ((char *)0);
}

//Si 

int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", strnstr(av[1], av[2], *av[3]));
}