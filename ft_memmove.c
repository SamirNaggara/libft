/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:37:12 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/22 00:13:25 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcbis;
	char	*destbis;

	srcbis = (void *)src;
	destbis = (void *)dest;
	if (!srcbis && !destbis)
	{
		destbis = NULL;
		return (destbis);
	}
	if (srcbis >= destbis)
	{
		i = 0;
		while (i < n)
		{
			destbis[i] = srcbis[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i + 1 != 0)
		{
			destbis[i] = srcbis[i];
			i--;
		}
	}
	return (destbis);
}
// int main()
// {
//    int  i;
//     char sResult[] = {67, 68, 67, 68, 69, 0, 45};
//     s,d
//     {67, 68, 68, 68, 69, 0, 45}
//     {67, 67, 68, 68, 69, 0, 45};
//     ft_memmove(sResult + 1, sResult, 2);
//     i = 0;
//     while (i < 7)
//     {
//         printf("%d\n", sResult[i++]);
//     }
// }