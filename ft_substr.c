/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:27:15 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 14:57:43 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, unsigned int n);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	new_str = (char *)malloc(len * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str = ft_strncpy(new_str, s + start, len);
	return (new_str);
}

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char test[] = "Salut";

	printf("%s", ft_substr(test, 3, 1));
}
*/
