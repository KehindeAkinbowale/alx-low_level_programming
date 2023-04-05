#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
* print_listint - a function that prints all the data in the list
* @h: a pointer to the head node of listint_t list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
