/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:41:59 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:42:19 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	t_list  *lista = NULL;

	t_list  *nodo1 = ft_lstnew("Nodo 1");
	t_list  *nodo2 = ft_lstnew("Nodo 2");
	t_list  *nodo3 = ft_lstnew("Nodo 3");
	ft_lstadd_front(&lista, nodo3);
	ft_lstadd_front(&lista, nodo2);
	ft_lstadd_front(&lista, nodo1);
	t_list  *actual = lista;
	while (actual)
	{
		printf("Contenido del nodo: %s\n", (char *)actual->content);
		actual = actual->next;
	}
	while (lista)
	{
		t_list  *siguiente = lista->next;
		free(lista);
		lista = siguiente;
	}

	return 0;
}