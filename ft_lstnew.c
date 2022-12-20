#include "libft.h"

t_list *ft_lstnew(void *content){
    t_list *new;

    new->content = content;
    new->next = NULL;
}