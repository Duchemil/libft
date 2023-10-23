/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:51:28 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 14:39:15 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((char) c == '\0')
		return ((char *)&s[i]);
	while (i-- != 0)
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
	}
	return (NULL);
}

// int main()
// {
//     printf("%c\n", ft_strrchr("Le jambon", 'j'));
//     printf("%d\n", ft_strrchr("Le truc", 'j'));
// }
