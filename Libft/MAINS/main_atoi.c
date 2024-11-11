/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:34:51 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 14:53:21 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

int main()
{
    printf("Integer: %d\n", ft_atoi(NULL));
    printf("Integer: %d\n", ft_atoi("   -456"));
    printf("Integer: %d\n", ft_atoi("    11115498246abcdef"));
    printf("Integer: %d\n", ft_atoi("	 ---789abc"));
    printf("Integer: %d\n", ft_atoi("0"));

    return (0);
}
