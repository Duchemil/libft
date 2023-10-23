/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:31:38 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/19 17:10:59 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_end(char const *s1, char const *set, int len)
{
	int	i;
	int	j;
	int	found;

	i = len;
	while (s1[i] && i >= 0)
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trim;

	i = 0;
	if (s1 == NULL || s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[i])
		i++;
	start = ft_start(s1, set);
	end = ft_end(s1, set, ft_strlen(s1) - 1);
	if (start > end || (start == -1 && end == -1))
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end + 1)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
