/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:14 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/23 09:32:56 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nodo_a;

	nodo_a = lst;
	if (!lst)
		return (NULL);
	while (nodo_a->next)
		nodo_a = nodo_a->next;
	return (nodo_a);
}
