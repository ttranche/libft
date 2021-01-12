/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:35:51 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/16 16:21:49 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*s2;
	size_t	memlen;

	memlen = ft_strlen(s1) + 1;
	if (!(s2 = malloc(memlen)))
		return (NULL);
	ft_memcpy(s2, s1, memlen);
	return (s2);
}
