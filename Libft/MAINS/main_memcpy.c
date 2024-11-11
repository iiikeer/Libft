/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:13:56 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 12:54:02 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *src = "Hello, World!";
    char dest[20]; // make sure dest is large enough to hold the copied data
    size_t n = 10;

    ft_memcpy(dest, src, n);
    printf("Copied %zu bytes from src to dest:\n", n);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    src = NULL;
    char dest1[20]; // make sure dest is large enough to hold the copied data
    ft_memcpy(dest1, src, n);
    printf("Copied %zu bytes from src to dest:\n", n);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest1);

    return 0;
}
