#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* delete_nodeint_at_index - a function that deletes the node at index
* head: pointer to the head pointer to listint_t
* index: position of the node to be deleted
* Return: 1 (Success) otherwise returns -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *previous = *head;
unsigned int k;
if ((*head) == NULL)
return (-1);
if (current == NULL)
return (-1);
if (index == 0)
{
(*head) = (*head)->next;
free(current);
return (1);
}
for (k = 0; k < (index - 1); k++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
previous = current->next;
current->next = previous->next;
free(previous);
return (1);
}
