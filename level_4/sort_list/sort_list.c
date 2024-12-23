#include "list.h"
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int *swap;
	int tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			tmp = lst;
		}
		else
			lst = lst->next;
	}
	tmp = lst;
	return lst;
}

int ascending(int a, int b)
{
  return (a <= b);
}

t_list *create_node(int data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main()
{
    t_list *lst = create_node(4);
    lst->next = create_node(3);
    lst->next->next = create_node(1);
    lst->next->next->next = create_node(2);

    printf("Original list: \n");
    print_list(lst);

    lst = sort_list(lst, ascending);

    printf("Sorted list: \n");
    print_list(lst);

    t_list *tmp;
    while (lst)
    {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }

    return 0;
}
