/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:50:09 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/23 13:59:18 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr(int nb, int fd)
{
	unsigned int	i;

	i = nb;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		i = -nb;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10, fd);
		ft_putnbr(i % 10, fd);
	}
	else
		ft_putchar(i + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}
