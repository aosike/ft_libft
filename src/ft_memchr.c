/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:58:49 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 15:06:29 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	if (n != 0)
	{
		while (n-- != 0)
		{
			if (*p++ == (unsigned char)c)
				return ((void *)(p - 1));
		}
	}
	return (NULL);
}