/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:06:00 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 17:30:30 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			i;
	int			j;
	char		*dest;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(*dest) * (i + 1));
	if (dest == NULL)
		return (0);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
