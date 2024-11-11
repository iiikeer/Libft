/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:33:57 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:34:15 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	t_list  *lista = NULL;

	t_list  *nodo1 = ft_lstnew("Nodo 1");
	t_list  *nodo2 = ft_lstnew("Nodo 2");
	t_list  *nodo3 = ft_lstnew("Nodo 3");
	ft_lstadd_front(&lista, nodo1);
	ft_lstadd_front(&lista, nodo2);
	ft_lstadd_front(&lista, nodo3);
	int size = ft_lstsize(lista);
	printf("Tamaño de la lista: %d\n", size);
	while (lista)
	{
		t_list  *siguiente = lista->next;
		free(lista);
		lista = siguiente;
	}
	return 0;
}