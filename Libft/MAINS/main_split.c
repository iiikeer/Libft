/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:46:14 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:48:25 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() 
{
    char const *str = "hello-world-foo-baoro";
    char c = '-';
    char **arr = ft_split(str, c);

    if (arr == NULL) {
        printf("Error: ft_split failed\n");
        return 1;
    }
    int i = 0;
    while (arr[i] != NULL) {
        printf("Subcadena %d: %s\n", i, arr[i]);
        i++;
    }
    for (i = 0; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    free(arr);
    str = NULL;
    c = '-';
    arr = ft_split(str, c);
    if (arr == NULL) {
        printf("Error: ft_split failed\n");
        return 1;
    }
    i = 0;
    while (arr[i] != NULL) {
        printf("Subcadena %d: %s\n", i, arr[i]);
        i++;
    }
    for (i = 0; arr[i] != NULL; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
