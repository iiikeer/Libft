/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:57:00 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/15 08:42:16 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	int fd = open("archivo.txt", O_WRONLY | O_APPEND, 0644);
	if (fd == -1)
		return 1;

	char *c1 = NULL;
	char *c2 = "Helio ";
	char *c3 = "The lio ";

	ft_putstr_fd(c1, fd);
	ft_putstr_fd(c2, fd);
	ft_putstr_fd(c3, fd);

	close(fd);
	return 0;
}