/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:24:57 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/26 11:38:12 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char *str = "Hello, World!";
    int c = 'H';
    size_t n = 1;

    void *ptr = ft_memchr(str, c, n);
    if (ptr != NULL)
        printf("Found character '%c' at address %p\n", c, ptr);
    else 
        printf("Character '%c' not found in the first %zu bytes of the string\n", c, n);
    str = NULL;
    c = 'H';
    n = 10;
    ptr = ft_memchr(str, c, n);
    if (ptr != NULL)
        printf("Found character '%c' at address %p\n", c, ptr);
    else
        printf("Character '%c' not found in the first %zu bytes of the string\n", c, n);
    return 0;
}