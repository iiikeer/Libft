/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:50:32 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:47:40 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *original = "Hello, World!";
    char *duplicate;

    printf("Original string: \"%s\"\n", original);
    duplicate = ft_strdup(original);
    printf("Duplicated string: \"%s\"\n", duplicate);
    free(duplicate);
    original = NULL;
    printf("Original string: \"%s\"\n", original);
    duplicate = ft_strdup(original);
    printf("Duplicated string: \"%s\"\n", duplicate);
    
    free(duplicate);
    return 0;
}
