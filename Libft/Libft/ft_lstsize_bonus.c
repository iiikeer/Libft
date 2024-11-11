/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:22:59 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/23 09:43:45 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*nodo_a;

	size = 0;
	nodo_a = lst;
	while (nodo_a)
	{
		size++;
		nodo_a = nodo_a->next;
	}
	return (size);
}
