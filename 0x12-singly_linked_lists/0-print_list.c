#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a single list_t
* @h: a pointer pointing to the list_t
*
* Return: the number of nodes present in list_t
*/
size_t print_list(const list_t *h)
{
size_t k = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
k++;
}

return (k);
}
