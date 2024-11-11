/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:31:12 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 09:55:13 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *src = "Hello, World!";
    char dest[20]; // buffer de destino con espacio suficiente

    printf("Source string: \"%s\"\n", src);
    size_t size = 10; // tamaño de copia
    size_t length = ft_strlcpy(dest, src, size);
    printf("Destination string: \"%s\"\n", dest);
    printf("Length of copied string: %ld\n", length);
    src = NULL;
    char dest2[20];
    printf("Source string: \"%s\"\n", src);
    length = ft_strlcpy(dest2, src, size);
    printf("Destination string: \"%s\"\n", dest2);
    printf("Length of copied string: %ld\n", length);

    return 0;
}
