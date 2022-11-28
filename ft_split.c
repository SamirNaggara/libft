/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:16:19 by snaggara          #+#    #+#             */
/*   Updated: 2022/11/28 15:24:20 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*str_malloc_and_initialize(int length);

// int	ft_strlen(char const *chaine);

// int	nb_char_in_string(char const *string, char const c);

// int	*pos_char_in_string(char const *string, char const c);

// char	*ft_concat_car(char *chaine, char const car);

// char	**ft_split(char const *s, char c)
// {
// 	char	**new_array;
// 	int		i;
// 	int		beg;
// 	int		int_word;
// 	int		*pos;

// 	pos = pos_char_in_string(s, c);
// 	new_array = (char **)malloc((nb_char_in_string(s, c) + 2) * sizeof(char*));

// 	if (!new_array)
// 		return (NULL);
// 	i = 0;
// 	beg = 0;
// 	while (i < nb_char_in_string(s, c))
// 	{
// 		int_word = 0;
// 		new_array[i] = str_malloc_and_initialize(pos[i] - beg);
// 		while (int_word + beg < pos[i])
// 			ft_concat_car(new_array[i], s[beg + int_word++]);
// 		beg = pos[i] + 1;
// 		i++;
// 	}
// 	while (s[beg])
// 			ft_concat_car(new_array[i], s[beg++]);
// 	new_array[i + 1] = NULL;
// 	return (new_array);
// }

// /*
// 	Renvoie le nombre de fois ou le caractere est apparu dans la string
// 	Sauf si c'est en premier ou en dernier
// */
// int	nb_char_in_string(char const *string, char const c)
// {
// 	int	i;
// 	int	counter;

// 	i = 1;
// 	counter = 0;
// 	while (string[i + 1])
// 	{
// 		if (string[i] == c)
// 			counter++;
// 		i++;
// 	}
// 	return (counter);
// }

// int	*pos_char_in_string(char const *string, char const c)
// {
// 	int	i;
// 	int	*pos;
// 	int	car_count;

// 	pos = malloc(nb_char_in_string(string, c) * sizeof(int));
// 	if (!pos)
// 		return (NULL);
// 	while (string[i + 1])
// 	{
// 		if (string[i] == c)
// 			pos[car_count++] = i;
// 		i++;
// 	}
// 	return (pos);
// }

// int	ft_strlen(char const *chaine)
// {
// 	int	i;

// 	i = 0;
// 	while (chaine[i])
// 		i++;
// 	return (i);
// }

// char	*str_malloc_and_initialize(int length)
// {
// 	char	*new;
// 	int		i;

// 	new = (char *)malloc(sizeof(char) * length + 1);
// 	if (!new)
// 		return (NULL);
// 	i = 0;
// 	while (i <= length)
// 		new[i++] = '\0';
// 	return (new);
// }

// char	*ft_concat_car(char *chaine, char const car)
// {
// 	int	i;

// 	i = ft_strlen(chaine);
// 	chaine[i] = car;
// 	chaine[i + 1] = '\0';
// 	return (chaine);
// }

// int	main(int ac, char **av)
// {
// 	char **result;
// 	int *test;
// 	char	*test2;
// 	if (!ac)
// 		return (0);
// 	//test = pos_char_in_string("Ceci est ma chaine de caractere", ' ');
// 	int	i;
	
// 	//test2 = malloc(10 * sizeof(char));
// 	//test2[0] = 'a';
// 	//printf("%s\n", ft_concat_car(test2, 'b'));
// 	//while (i < 5)
// 	//	printf("%d\n", test[i++]);
// 	//printf("%d\n", nb_char_in_string("Ceci est ma chaine de caractere ", ' '));
// 	result = ft_split(av[1], ' ');
// 	/*
// 	while (result)
// 	{
// 		printf("%s\n", *result);
// 		result++;
// 	}
// 	*/
// 	return (0);
// }
