/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:27:48 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 11:28:14 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    // Crear un nuevo nodo con contenido "Hola, mundo!"
    char *contenido = "Hola, mundo!";
    t_list *nodo = ft_lstnew(contenido);

    // Verificar si el nodo se creó correctamente
    if (nodo)
    {
        printf("Contenido del nodo: %s\n", (char *)nodo->content);
        printf("Dirección del nodo: %p\n", (void *)nodo);
        printf("Dirección del contenido: %p\n", nodo->content);
    }
    else
    {
        printf("Error: no se pudo crear el nodo\n");
    }

    // Liberar la memoria del nodo
    free(nodo);

    return 0;
}