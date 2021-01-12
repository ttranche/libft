/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:45:22 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/17 02:18:18 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*next;

	next = *alst;
	while (next)
	{
		if (next->next == NULL)
		{
			next->next = new;
			return ;
		}
		next = next->next;
	}
	*alst = new;
}
