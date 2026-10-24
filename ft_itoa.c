/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenomar <abenomar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:59:37 by abenomar          #+#    #+#             */
/*   Updated: 2026/10/20 23:06:15 by abenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigit(long n)
{
	int	result;

	result = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		result++;
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		sign;
	int		len;
	long	nb;

	nb = n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	len = countdigit(nb) + sign + 1;
	p = malloc(len * sizeof(char));
	if (!p)
		return (NULL);
	p[--len] = '\0';
	if (sign)
		p[0] = '-';
	while (len > sign)
	{
		len--;
		p[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (p);
}
