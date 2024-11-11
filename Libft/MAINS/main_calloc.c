/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:42:54 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:37:27 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    int *arr = ft_calloc(10, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Return error code
    }
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 2; // Initialize the array elements
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);

    return 0;
}
