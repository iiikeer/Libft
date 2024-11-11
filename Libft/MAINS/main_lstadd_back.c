/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:38:04 by iullibar          #+#    #+#             */
/*   Updated: 2024/10/17 14:41:57 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

int main()
{
	t_list  *lista = NULL;

	// Crear nuevos nodos
	t_list  *nodo1 = ft_lstnew("Nodo 1");
	t_list  *nodo2 = ft_lstnew("Nodo 2");
	t_list  *nodo3 = ft_lstnew("Nodo 3");

	ft_lstadd_back(&lista, nodo1);
	ft_lstadd_back(&lista, nodo2);
	ft_lstadd_back(&lista, nodo3);
	t_list *current = lista;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (lista)
	{
		t_list  *siguiente = lista->next;
		free(lista);
		lista = siguiente;
	}

	return 0;
}