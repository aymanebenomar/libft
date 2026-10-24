/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:00:32 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/20 22:45:24 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **arr, int j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
	return (NULL);
}

static size_t	countw(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**alloc_arr(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_calloc(countw(s, c) + 1, sizeof(char *)));
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			i;
	int			j;
	size_t		start;

	arr = alloc_arr(s, c);
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j++] = ft_substr(s, start, i - start);
			if (!arr[j - 1])
				return (free_all(arr, j - 1));
		}
		else
			i++;
	}
	return (arr);
}
