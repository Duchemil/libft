/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:12:18 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/20 17:52:14 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	if (!s[0])
		return (0);
	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

char	**ft_free(char **string)
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (NULL);
}

void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!tab)
		return (NULL);
	i = -1;
	next_str = (char *) s;
	next_str_len = 0;
	while (++i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!tab)
			return (ft_free(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
	}
	tab[i] = NULL;
	return (tab);
}

// int main()
// {
//     char *input = "xxxxxxxxxxxhello!";
//     char separator = 'x';

//     char **result = ft_split(input, separator);

//     if (result)
//     {
//         for (int i = 0; result[i] ; i++)
//         {
//             printf("Token %d: %s\n", i, result[i]);
//             free(result[i]); // Free each string
//         }

//         free(result); // Free the array of strings
//     }
//     else
//     {
//         printf("ft_split returned NULL\n");
//     }

//     return 0;
// }
