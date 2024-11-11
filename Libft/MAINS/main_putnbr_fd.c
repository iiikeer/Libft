/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:01:22 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/14 17:34:24 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    int c1 = 2147483647;
    int c2 = -2147483648;
    int c3 = 0;

	int fd = open("archivo.txt", O_WRONLY | O_APPEND, 0644);
	if (fd == -1)
		return 1;

	ft_putnbr_fd(c1, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(c2, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(c3, fd);
	write(fd, "\n", 1);

	close(fd);
	return 0;
}