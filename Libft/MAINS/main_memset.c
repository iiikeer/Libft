/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:00:40 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 14:59:36 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *str = NULL;

	printf("Original string: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("Modified string: %s\n", str);
	char str1[20] = "wjdbcljebl";
	printf("Original string: %s\n", str1);
	ft_memset(str1, 'x', 13);
	printf("Modified string: %s\n", str1);

	return 0;
}
