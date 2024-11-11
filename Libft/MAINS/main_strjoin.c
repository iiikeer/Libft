/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:29:07 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 10:10:11 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    const char *s1 = "Hello, ";
    const char *s2 = NULL;
    char *result = ft_strjoin(s1, s2);

    printf("Joined strings:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("result: %s\n", result);
    free(result);
    s1 = NULL;
    s2 = "World!";
    result = ft_strjoin(s1, s2);
    printf("Joined strings:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("result: %s\n", result);
    free(result);

    return 0;
}
