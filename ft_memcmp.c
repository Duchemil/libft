/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:28:24 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 15:48:21 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*s;

	p = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p != *s)
			return (*p - *s);
		if (n == 1)
			return (0);
		p++;
		s++;
		n--;
	}
	return (0);
}
