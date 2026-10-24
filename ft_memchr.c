/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:22:05 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/20 12:24:41 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*x;
	size_t				i;

	x = s;
	i = 0;
	while (i < n)
	{
		if (*x == (unsigned char)c)
			return ((void *)x);
		x++;
		i++;
	}
	return (NULL);
}
