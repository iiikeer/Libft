/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:13:05 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:25:50 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
    int	num = 2147483647;
    char *str = ft_itoa(num);

    if (str)
    {
        printf("El número %d como cadena es: %s\n", num, str);
        free(str);
    }
    else
        printf("Error al asignar memoria\n");
    num = 0;
    str = ft_itoa(num);
    if (str)
    {
        printf("El número %d como cadena es: %s\n", num, str);
        free(str);
    }
    else
        printf("Error al asignar memoria\n");
    num = -2147483648;
    str = ft_itoa(num);

    if (str)
    {
        printf("El número %d como cadena es: %s\n", num, str);
        free(str);
    }
    else
        printf("Error al asignar memoria\n");
    return 0;
}