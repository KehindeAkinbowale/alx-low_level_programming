#include"lists.h"
#include<stdio.h>

/**
* print_listint - a function that prints all the data in the list
* @h: a pointer to the head node of listint_t list
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t num_node;
num_node = 0;
while (h != NULL)
{
num_node++;
printf("%d", h->n);
h = h->next;
}
printf("\n");
return (num_node);
}
