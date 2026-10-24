/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:06:26 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/20 22:10:22 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenn;
	char	*arr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	lenn = ft_strlen(s) - start;
	if (len < lenn)
		lenn = len;
	i = 0;
	arr = malloc((lenn + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < lenn)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}
