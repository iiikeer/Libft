/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:44:18 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:44:39 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void* content)
{
    free(content);
}

// Función para imprimir la lista
void ft_print_list(t_list* lst)
{
    while (lst != NULL)
    {
        printf("%d ", *(int*)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main()
{
    // Crear una lista con varios nodos
    t_list* lista = ft_lstnew(malloc(sizeof(int)));
    *(int*)lista->content = 1;
    lista->next = ft_lstnew(malloc(sizeof(int)));
    *(int*)lista->next->content = 2;
    lista->next->next = ft_lstnew(malloc(sizeof(int)));
    *(int*)lista->next->next->content = 3;
    // Imprimir la lista antes de liberarla
    printf("Lista antes de liberarla: ");
    ft_print_list(lista);
    // Llamar a la función ft_lstclear para liberar la lista
    ft_lstclear(&lista, del);
    return 0;
}