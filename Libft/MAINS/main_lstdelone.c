/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:48:05 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/24 16:28:33 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función para liberar el contenido de un nodo
void del(void* content)
{
	free(content);
}

int main()
{
	// Crear un nuevo nodo con contenido
	int* contenido = malloc(sizeof(int));
	*contenido = 5;
	t_list* nodo = ft_lstnew(contenido);

	// Imprimir el contenido del nodo antes de liberarlo
	printf("Contenido del nodo antes de liberarlo: %d\n", *(int*)nodo->content);

	// Llamar a la función ft_lstdelone para liberar el nodo
	ft_lstdelone(nodo, del);

	return 0;
}