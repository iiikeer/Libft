/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:41:33 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/26 11:39:20 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str1 = "Hello, World!";
    char *str2 = "NULL";
    size_t n = 10;

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("The first %zu bytes of the strings are equal\n", n);
    else if (result < 0)
        printf("The first %zu bytes of the string str1 are less than the first %zu bytes of the string str2\n", n, n);
    else 
        printf("The first %zu bytes of the string str1 are greater than the first %zu bytes of the string str2\n", n, n);
    str1 = "NULL";
    str2 = "Hello, Universe!";
    result = ft_memcmp(str1, str2, n);
    if (result == 0)
        printf("The first %zu bytes of the strings are equal\n", n);
    else if (result < 0)
        printf("The first %zu bytes of the string str1 are less than the first %zu bytes of the string str2\n", n, n);
    else 
        printf("The first %zu bytes of the string str1 are greater than the first %zu bytes of the string str2\n", n, n);

    return 0;
}