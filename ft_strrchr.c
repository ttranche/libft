/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:25:30 by ttranche          #+#    #+#             */
/*   Updated: 2020/11/16 16:21:10 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s) + 1;
	while (i--)
		if (s1[i] == c)
			return (s1 + i);
	return (NULL);
}
