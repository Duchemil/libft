/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:44:22 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 15:26:54 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (p == s || n == 0)
		return (dest);
	if (p < s)
	{
		while (n-- > 0)
			*p++ = *s++;
	}
	else
	{
		p += n;
		s += n;
		while (n-- > 0)
			*(--p) = *(--s);
	}
	return (dest);
}
