/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:48:16 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/23 15:55:03 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;
	int		i;

	if (lst == NULL)
		return ;
	i = ft_lstsize(lst);
	current = lst;
	while (i > 0)
	{
		next = current->next;
		f(current->content);
		current = next;
		i--;
	}
}
