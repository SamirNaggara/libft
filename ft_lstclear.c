/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snaggara <snaggara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:15:04 by snaggara          #+#    #+#             */
/*   Updated: 2022/12/21 20:18:37 by snaggara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*browse;
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	browse = *lst;
	while (browse->next)
	{
		tmp = browse->next;
		ft_lstdelone(browse, del);
		browse = tmp;
	}
	ft_lstdelone(browse, del);
	*lst = NULL;
}
