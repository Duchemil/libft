/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:18:34 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 14:12:59 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

// int main()
// {
//     printf("%d\n", ft_isalnum('.'));
//     printf("%d\n", ft_isalnum(' '));
//     printf("%d\n", ft_isalnum('/'));
//     printf("%d\n", ft_isalnum('['));
//     printf("%d\n", ft_isalnum('1'));
//     printf("%d\n", ft_isalnum('5'));
//     printf("%d\n", ft_isalnum('f'));
//     printf("%d\n", ft_isalnum('d'));
//     return (0);
// }
