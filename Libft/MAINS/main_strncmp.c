/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:33:26 by iullibar          #+#    #+#             */
/*   Updated: 2024/11/06 09:58:54 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str1 = "Hello, World!";
    char *str2 = NULL;
    size_t n = 9; // tamaño de la comparación

    printf("String 1: \"%s\"\n", str1);
    printf("String 2: \"%s\"\n", str2);
    int result = ft_strncmp(str1, str2, n);
    if (result == 0)
        printf("The first %ld characters of both strings are equal\n", n);
    else
        printf("The first difference is at position %d:\n", result);
    str1 = NULL;
    str2 = "Hello, Universe";
    printf("String 1: \"%s\"\n", str1);
    printf("String 2: \"%s\"\n", str2);
    result = ft_strncmp(str1, str2, n);
    if (result == 0)
        printf("The first %ld characters of both strings are equal\n", n);
    else
        printf("The first difference is at position %d:\n", result);
    return 0;
}
