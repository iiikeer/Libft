/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:22:43 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 14:48:32 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    char *src = "Hello, World and Universe!";
    char dest[20]; 
    size_t n = 12;
    for (int i = 0; i < 20; i++)
        dest[i] = 'X';    
    ft_memmove(dest, src, n);
    printf("Moved %zu bytes from src to dest:\n", n);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    src = NULL;
    char dest1[20]; 
    for (int i = 0; i < 20; i++)
        dest1[i] = 'X';
    ft_memmove(dest1, src, n);
    printf("Moved %zu bytes from src to dest:\n", n);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest1);

    return 0;
}
