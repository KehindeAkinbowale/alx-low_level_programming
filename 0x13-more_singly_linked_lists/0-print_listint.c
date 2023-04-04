#include"lists.h"
#include<stdio.h>

/**
* print_listint - a function that prints all the elements in the list
* @h: a pointer to the list_int single list struct
* Description: a function used to print all elements of a list_int list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t Count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
Count++;
h = h->next;
}
return (count);
}
