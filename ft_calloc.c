/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:28:31 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/21 16:20:24 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	return (ft_memset(p, 0, nmemb * size));
}
