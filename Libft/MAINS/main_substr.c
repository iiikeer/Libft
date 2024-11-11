/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:33:49 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:53:55 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = "Hello, World!";
    char *substr;

    printf("Original string: %s\n", str);
    substr = ft_substr(str, 7, 6);
    if (substr == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return 1;
    }
    printf("Substring: %s\n", substr);
    free(substr);
    str = NULL;
    printf("Original string: %s\n", str);
    substr = ft_substr(str, 7, 6);
    if (substr == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return 1;
    }
    printf("Substring: %s\n", substr);
    free(substr);
    return 0;
}
