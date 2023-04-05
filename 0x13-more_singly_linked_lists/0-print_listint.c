#include"lists.h"
#include<stdio.h>

/**
* print_listint - a function that prints all the data in the list
* @h: a pointer to the head node of listint_t list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num_node;
num_node = 0;
while (h != NULL)
{
num_node++;
printf("%d", h->n);
printf("\n");
h = h->next;
}
return (num_node);
}
