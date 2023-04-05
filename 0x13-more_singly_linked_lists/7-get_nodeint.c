#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
* get_nodeint_at_index - a function that returns the nth node of a list
* @head: a pointer pointing to the listint_t list
* @index: The index at which the node is located
* Return: location of the node or NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k;
for (k = 0; k < index; k++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
