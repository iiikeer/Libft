/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:50:48 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:51:43 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    t_list  *lista = NULL;

    // Crear nuevos nodos
    t_list  *nodo1 = ft_lstnew("Nodo 1");
    t_list  *nodo2 = ft_lstnew("Nodo 2");
    t_list  *nodo3 = ft_lstnew("Nodo 3");

    // Añadir nodos a la lista
    ft_lstadd_front(&lista, nodo1);
    ft_lstadd_front(&lista, nodo2);
    ft_lstadd_front(&lista, nodo3);

    // Obtener el último nodo de la lista
    t_list *ultimo_nodo = ft_lstlast(lista);
    printf("Contenido del último nodo: %s\n", (char *)ultimo_nodo->content);

    // Liberar la memoria de la lista
    while (lista)
    {
        t_list  *siguiente = lista->next;
        free(lista);
        lista = siguiente;
    }

    return 0;
}