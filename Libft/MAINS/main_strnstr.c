/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:34:28 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 15:21:26 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = NULL;
    char *to_find = NULL;
    size_t n = 13; // tamaño de la búsqueda

    printf("Original string: \"%s\"\n", str);
    printf("String to find: \"%s\"\n", to_find);
    char *found = ft_strnstr(str, to_find, n);
    if (found != NULL)
        printf("String found\n");
    else
        printf("String not found\n");

    str = NULL;
    to_find = "World";
    
    printf("Original string: \"%s\"\n", str);
    printf("String to find: \"%s\"\n", to_find);
    found = ft_strnstr(str, to_find, n);
    if (found != NULL)
        printf("String found\n");
    else
        printf("String not found\n");
    return 0;
}
