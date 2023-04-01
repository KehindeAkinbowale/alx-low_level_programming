#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in list_t
* @h: a pointer to the list_t
*
* Return: The number of elements in pointer h list_t
*/
size_t list_len(const list_t *h)
{
size_t k = 0;

while (h != NULL)
{
k++;
h = h->next;
}
return (k);
}
