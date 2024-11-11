/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:33:04 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 15:21:39 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = "Hello, World!";
    int c = 'l';
    
    printf("Original string: \"%s\"\n", str);
    char *found = ft_strrchr(str, c);
    if (found != NULL)
        printf("String from last occurrence of character '%c' onwards: \"%s\"\n", c, found);  
    else
        printf("Character '%c' not found\n", c);

    str = NULL;
    c = 'l';
    
    printf("Original string: \"%s\"\n", str);
    found = ft_strrchr(str, c);
    if (found != NULL)
        printf("String from last occurrence of character '%c' onwards: \"%s\"\n", c, found);  
    else
        printf("Character '%c' not found\n", c);
    return 0;
}
