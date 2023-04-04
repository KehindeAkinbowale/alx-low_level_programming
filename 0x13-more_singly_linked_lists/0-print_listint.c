#include"lists.h"
#include<stdio.h>
/**
* print_listint - a function that prints all the elements in the list
* @h: a pointer to the list_int single list struct
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
