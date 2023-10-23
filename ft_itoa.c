/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:26:17 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/20 18:44:30 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_nb(char *string, int len, int n)
{
	len = len - 1;
	if (n < 0)
	{
		n = -n;
		len--;
	}
	while (n > 0)
	{
		string[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*string;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (string);
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	if (n == 0)
		string[0] = '0';
	else
		string = ft_nb(string, len, n);
	string[len] = '\0';
	return (string);
}
