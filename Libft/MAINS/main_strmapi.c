/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:43:04 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/26 11:49:44 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_touper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char to_upper(unsigned int index, char c)
{
	(void)index;
	return ft_touper(c);
}

int main()
{
	char *str = "null";
	printf("\"%s\"\n",ft_strmapi(str, to_upper));
	return 0;
}