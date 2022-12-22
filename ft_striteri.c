/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 01:51:48 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/21 01:52:06 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*)){
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
