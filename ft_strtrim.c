/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:21:51 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/21 01:50:01 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *chaine);

int		char_in_array(const char car, const char *chaine);

char	*ft_concat_car(char *chaine, char car);

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	char	*new;
	char	*new2;
	size_t	size;

	if (!*set)
		return ((ft_strdup(s1)));
	size = ft_strlen(s1);
	new = malloc(sizeof(char) * (size + 1));
	ft_memset(new, 0, size + 1);
	i = 0;
	while (*set)
	{
		while (s1[i])
		{
			if (!char_in_array(s1[i], set))
				ft_concat_car(new, s1[i]);
			i++;
		}
		set++;
	}
	new2 = ft_strdup(new);
	free(new);
	return (new2);
}
/*
	Renvoie true si le caractere est dans la chaine
*/

int	char_in_array(const char car, const char *chaine)
{
	int	i;

	i = 0;
	while (chaine[i])
	{
		if (chaine[i++] == car)
			return (1);
	}
	return (0);
}
/*
	Concat dans la chaine le caractere demande. 
	Il modifie aussi la chaine, et renvoie son pointeur
	Ne gere pas le maloc
*/

char	*ft_concat_car(char *chaine, char car)
{
	int	i;

	i = ft_strlen(chaine);
	chaine[i] = car;
	chaine[i + 1] = '\0';
	return (chaine);
}
