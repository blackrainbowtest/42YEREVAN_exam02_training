/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

--------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;

    t_list *c = malloc(sizeof(t_list));
    c->next = 0;
    c->data = &n;

    t_list *b = malloc(sizeof(t_list));
    b->next = c;
    b->data = &n;

    t_list *a = malloc(sizeof(t_list));
    a->next = b;
    a->data = &n;

    printf("%d\n", ft_list_size(a));
}
*/

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	return (1 + ft_list_size(begin_list->next));
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;

    t_list *c = malloc(sizeof(t_list));
    c->next = 0;
    c->data = &n;

    t_list *b = malloc(sizeof(t_list));
    b->next = c;
    b->data = &n;

    t_list *a = malloc(sizeof(t_list));
    a->next = b;
    a->data = &n;

    printf("%d\n", ft_list_size(a));
}