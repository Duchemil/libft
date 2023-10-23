/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:14:04 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 14:33:54 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = '\0';
		n--;
	}
}

// void printArray(int arr[], int n)
// {
//     int i =0;
//     for (i=0; i<n; i++)
//     {
//         printf("%d\n", *arr++);
//     }
// }

// int main()
// {
//     int arr[5] = {19, 10, 8, 17, 9};
//     int arr2[5] = {19, 10, 8, 17, 9};
//     // Print Array before calling memset
//     printArray(arr,5);
//     printf("\n");
//     printArray(arr2,5);
//     //Calling own created memset
//     ft_bzero(arr,sizeof(arr));
//     printf("\n");
//     bzero(arr2,sizeof(arr));
//     // Print Array After calling memset
//     printArray(arr,5);
//     printf("\n");
//     printArray(arr2,5);
//     return 0;
// }
