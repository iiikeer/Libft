/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:05:46 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/26 15:43:08 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void    f(unsigned int index, char *str)
{
    str[index] = ft_toupper(str[index]);
}

int main()
{
    char str[20] = "hola";
    ft_striteri(str, f);
    printf("%s\n", str); 
    //char *str1 = NULL;
    ft_striteri(NULL, f);
    //printf("%s\n", str1);
    return 0;
}