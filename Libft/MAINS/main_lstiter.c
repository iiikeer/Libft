/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:49:47 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:50:07 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print_content(void *content)
{
    printf("%d ", *(int*)content);
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

    // Imprimir la lista utilizando ft_lstiter
    ft_lstiter(lista, print_content);
    printf("\n");

    return 0;
}