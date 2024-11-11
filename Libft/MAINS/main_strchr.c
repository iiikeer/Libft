/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:32:39 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:52:26 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = "Hello, dsgucbk!";
    int c = 'u';

    printf("Original string: \"%s\"\n", str);
    char *found = ft_strchr(str, c);
    if (found != NULL)
    {
        printf("String from character '%c' onwards: \"%s\"\n", c, found);
    }
    else
    {
        printf("Character '%c' not found\n", c);
    }
    str = NULL;
    c = 'u';
    printf("Original string: \"%s\"\n", str);
    found = ft_strchr(str, c);
    if (found != NULL)
    {
        printf("String from character '%c' onwards: \"%s\"\n", c, found);
    }
    else
    {
        printf("Character '%c' not found\n", c);
    }


    return 0;
}
