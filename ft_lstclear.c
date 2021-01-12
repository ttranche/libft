/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:59:36 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/17 02:17:59 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*swap;

	next = *lst;
	while (next)
	{
		del(next->content);
		swap = next->next;
		free(next);
		next = swap;
	}
	*lst = NULL;
}
