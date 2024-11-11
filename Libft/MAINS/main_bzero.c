/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:30:03 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 14:55:06 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *str = NULL;

	printf("Original string: %s\n", str);
	ft_bzero(NULL, 10);
	printf("Modified string: %s\n", str);
	char str1[20] = "Hello, World!";
	printf("Original string: %s\n", str1);
	ft_bzero(str1, 15);
	printf("Modified string: %s\n", str1);
	
	return 0;
}
