/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:59:40 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/18 14:12:00 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = c;
		n--;
	}
	return (s);
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
//     ft_memset(arr,-1, sizeof(arr));
//     printf("\n");
//     memset(arr2,-1, sizeof(arr));
//     // Print Array After calling memset
//     printArray(arr,5);
//     printf("\n");
//     printArray(arr2,5);
//     return 0;
// }
