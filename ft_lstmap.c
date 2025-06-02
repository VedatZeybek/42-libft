/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzeybek <vzeybek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:14:45 by vzeybek           #+#    #+#             */
/*   Updated: 2025/06/02 18:33:03 by vzeybek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
