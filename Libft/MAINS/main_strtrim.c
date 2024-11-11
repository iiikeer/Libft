/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:10:38 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 09:29:34 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = "     Hello, World!    ";
    char *set = " ";
    char *trimmed;
    printf("Original string: \"%s\"\n", str);
    trimmed = ft_strtrim(str, set);
    if (trimmed == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return 1;
    }
    printf("Trimmed string: \"%s\"\n", trimmed);
    free(trimmed);
    str = NULL;
    set = " ";
    printf("Original string: \"%s\"\n", str);
    trimmed = ft_strtrim(str, set);
    if (trimmed == NULL)
    {
        printf("Error: unable to allocate memory\n");
        return 1;
    }
    printf("Trimmed string: \"%s\"\n", trimmed);
    free(trimmed);
    return 0;
}
