/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:38:16 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:43:04 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *str = "Hello, World!";

    printf("String: \"%s\"\n", str);
    printf("Length: %ld\n", ft_strlen(str));
    str = NULL;
    printf("String: \"%s\"\n", str);
    printf("Length: %ld\n", ft_strlen(str));
    return 0;
}
