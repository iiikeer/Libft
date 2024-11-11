/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:58:54 by iullibar          #+#    #+#             */
/*   Updated: 2024/09/19 12:00:28 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función para imprimir la lista
void print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

// Función para liberar la memoria de un entero
void del_int(void *content)
{
	free(content);
}

// Función para duplicar un entero
int *duplicate_int(void *content)
{
	int *new_int = malloc(sizeof(int));
	*new_int = *(int *)content;
	return new_int;
}

int main()
{
	// Crear una lista con algunos enteros
	t_list *lst = NULL;
	int *int1 = malloc(sizeof(int));
	*int1 = 1;
	int *int2 = malloc(sizeof(int));
	*int2 = 2;
	int *int3 = malloc(sizeof(int));
	*int3 = 3;
    
	ft_lstadd_back(&lst, ft_lstnew(int1));
	ft_lstadd_back(&lst, ft_lstnew(int2));
	ft_lstadd_back(&lst, ft_lstnew(int3));
	printf("Lista original: ");
	print_list(lst);
	t_list *new_lst = ft_lstmap(lst, (void *(*)(void *))duplicate_int, del_int);
	printf("Lista resultante: ");
	print_list(new_lst);
	ft_lstclear(&lst, del_int);
	ft_lstclear(&new_lst, del_int);
	return 0;
}
