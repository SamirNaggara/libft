/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:16:19 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/16 19:44:09 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_char_in_string(char const *string, char const c);

char	**return_null();

char	**return_simple(char const *s);

void	add_zero_string(char *chaine, char c);

char	**ft_split(char const *s, char c)
{
	char	*chaine;
	char	*debutChaine;
	char	*finChaine;
    char	**result;
	char	**debutResult;
	int		i;


	if (!*s)
		return (return_null());
	if (c == 0)
		return (return_simple(s));

	// Je duplique la premiere chaine de caractere
    chaine = ft_strdup(s);
	debutChaine = chaine;
	finChaine = chaine + ft_strlen(chaine);

	// Je chercche combien de fois le caractere est present,
	// puis je ;alloc le tableau du nombre de caractere present + 2
    result = (char**)malloc((nb_char_in_string(chaine, c) + 2) * sizeof(char *));
	if (!result)
		return return_null();
	debutResult = result;

	// Je parcous la chaine, je met des \0
	add_zero_string(chaine, c);

	i = 0;
	chaine = debutChaine;
	
	while (chaine < finChaine)
	{
		if (!*chaine)
		{
			chaine++;
			continue;
		}
		result[i] = ft_strdup(chaine);
		if (!result[i])
		{
			while (i >= 0)
			{
				free(result[i]);
				i--;
			}
			free(debutChaine);
			free(debutResult);
			return return_null();
		}
		chaine += ft_strlen(chaine);
		chaine++;
		i++;
	}
	result[i] = (char*)NULL;


	free(debutChaine);

	return (debutResult);
}

void	add_zero_string(char *chaine, char c)
{
	char	*finChaine;

	finChaine = chaine + ft_strlen(chaine);
	while (chaine < finChaine)
	{
	// j'enregistre d'ou je commence, puis quand je trouve le caractere, je place un \0
		while (*chaine == c)
				*(chaine++) = '\0';
		chaine = ft_strchr(chaine, c);
		if (!chaine)
			break;
		while (*chaine == c)
				*(chaine++) = '\0';
	}
}

char	**return_null()
{
	char	**result;
	
	result = (char **)malloc(sizeof(char *));
	result[0] = NULL;
	return (result);

}

char	**return_simple(char const *s)
{
	char	**result;
	
	result = (char **)malloc(sizeof(char *) * 2);
	result[0] = ft_strdup(s);
	result[1] = NULL;
	return (result);
}


int	nb_char_in_string(char const *string, char const c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	// On avance sans compter si on croise le caractere
	while (string[i] == c)
				i++;
	while (string[i])
	{
		if (string[i] == c)
		{
			// On avance autant qu'il y a de caracteres, mais on incremente au'une fois
			while (string[i] == c)
			{
				if (!string[i])
					break;
				i++;
			
			if (!string[i])
				return (counter);
			}

			counter++;

		}
		i++;
	}
	return (counter);
}



// int	main()
// {
// 	char **result;
// 	int	i;

// 	char chaine[] = "tripouille";
// 	//printf("Il y q %d split char\n", nb_char_in_string(chaine, ' '));
// 	result = ft_split(chaine, 0);
// 	i = 0;
	
// 	// printf("%s\n", result[0]);
// 	// printf("%s\n", result[1]);
// 	// printf("%s\n", result[2]);
// 	// printf("%s\n", result[3]);
// 	// printf("%s\n", result[4]);
// 	while (result[i])
// 	{
// 		printf("%d ; %s\n", i,result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }






















// int	*pos_char_in_string(char const *string, char const c);

// char	*ft_concat_car(char *chaine, char const car);

// char	**ft_split(char const *s, char c)
// {
// 	char	*chaine;
//     char    **result;
//     int     *pos;
// 	int    i;

//     chaine = ft_strdup(s);
//     result = malloc((nb_char_in_string(chaine, c) + 2) * sizeof(char *));
//     i = 0;
//     pos = pos_char_in_string(chaine, c);
//     while (i < nb_char_in_string(chaine, c))
//     {
//         chaine[pos[i]] = '\0';
//         i++;
//     }
//     result[0] = ft_strdup(chaine);
//     i = 0;
//     while (i < nb_char_in_string(chaine, c))
//     {
//         result[i + 1] = ft_strdup(chaine + pos[i] - 1);
//         i++;
//     }
//     result[i] = NULL;
// 	return (result);
// }
// //aVoila caest le aa
// /*
// 	Renvoie le nombre de fois ou le caractere est apparu dans la string
// 	Sauf si c'est en premier ou en dernier
// */


// int	*pos_char_in_string(char const *string, char const c)
// {
// 	int	i;
// 	int	*pos;
// 	int	car_count;

// 	pos = malloc((nb_char_in_string(string, c) + 1) * sizeof(int));
//     if (!pos)
// 		return (NULL);
//     ft_memset(pos, 0, nb_char_in_string(string, c));
//     i = 1;
//     car_count = 0;
// 	while (string[i + 1])
// 	{
// 		if (string[i] == c)
// 			pos[car_count++] = i;
// 		i++;
// 	}
// 	return (pos);
// }


// // char	*ft_concat_car(char *chaine, char const car)
// // {
// // 	size_t i;

// //     i = ft_strlen(chaine);
// // 	chaine[i] = car;
// // 	chaine[i + 1] = '\0';
// // 	return (chaine);
// // }

// // int	main(int ac, char **av)
// // {
// //     // Test de concatcar
// // 	// char chaine1[10] = "Samir ";
// //     // char car = 'v';
	
// //     // ft_concat_car(chaine1, car);
// //     // printf("%s\n", chaine1);

// //     // Test de nb char in string 
// //     // char chaine[30] = "aVoila ca'est le aa";
// //     // printf("%d\n", nb_char_in_string(chaine, 'r'));

// //     //Test de pos char in string 
// //     // int *pos;
// //     // int i;

// //     // char chaine[30] = "a";

// //     // pos = pos_char_in_string(chaine, 'a');
// //     // i = 0;
// //     // while (i < nb_char_in_string(chaine, 'a'))
// //     // {
// //     //     printf("Le %d ieme caractere est a la position %d\n", i + 1, pos[i]);
// //     //     i++;
// //     // }

    
		

	

// // 	return (0);
// // }
