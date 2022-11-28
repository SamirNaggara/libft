/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:21:51 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 15:35:53 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_malloc_and_initialize(int length);

size_t		ft_strlen(const char *chaine);

int		char_in_array(const char car, const char *chaine);

char	*ft_concat_car(char *chaine, char car);

char	*ft_strtrim(const  char *s1, const char *set)
{
	int		i;
	char	*new;

	new = str_malloc_and_initialize(ft_strlen(s1));
	i = 0;
	while (s1[i])
	{
		if (!char_in_array(s1[i], set))
			ft_concat_car(new, s1[i]);
		i++;
	}
	return (new);
}

/*
	Malloc et initialise avec des \0 une chaine de caractere, 
	avec la longueur demande
	Prends en compte le +1 pour la chaine final
*/
char	*str_malloc_and_initialize(int length)
{
	char	*new;
	int		i;

	new = (char *)malloc(sizeof(char) * length + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i <= length)
		new[i++] = '\0';
	return (new);
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

/*
int	main(int ac, char **av)
{
	if (ac)
		printf("%s", ft_strtrim(av[1],av[2]));
}
*/
