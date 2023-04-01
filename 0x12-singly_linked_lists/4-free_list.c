#include <stdlib.h>
#include "lists.h"

/**
* free_list - a function that frees a linked list_t
* @head: a pointer pointing to the list_t
* Returns: Nothing
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
