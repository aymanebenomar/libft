/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:49:29 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/16 11:48:25 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*keep;

	keep = NULL;
	while (*s)
	{
		if (*s == (char)c)
			keep = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)keep);
}
