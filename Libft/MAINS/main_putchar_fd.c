/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:28:18 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 15:56:29 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	int fd = open("archivo.txt", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
		return 1;

	char c1 = 'H';
	char c2 = 'e';
	char c3 = 'l';
	char c4 = 'l';
	char c5 = 'o';

	ft_putchar_fd(c1, fd);
	ft_putchar_fd(c2, fd);
	ft_putchar_fd(c3, fd);
	ft_putchar_fd(c4, fd);
	ft_putchar_fd(c5, fd);
	

	close(fd);
	return 0;
}