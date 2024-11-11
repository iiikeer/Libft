/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:31:36 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 12:56:10 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char dest[20] = "Hello, "; // buffer de destino con espacio suficiente
    char *src = "World!";
    size_t size = 20; // tamaño de concatenación

    printf("Destination string before concatenation: \"%s\"\n", dest);
    size_t length = ft_strlcat(dest, src, size);
    printf("Destination string after concatenation: \"%s\"\n", dest);
    printf("Length of resulting string: %ld\n", length);
    char dest1[20] = "Hello, "; // buffer de destino con espacio suficiente
    src = NULL;
    printf("Destination string before concatenation: \"%s\"\n", dest1);
    length = ft_strlcat(dest1, src, size);
    printf("Destination string after concatenation: \"%s\"\n", dest1);
    printf("Length of resulting string: %ld\n", length);
    
    return 0;
}
