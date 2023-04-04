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
if (*head == NULL)
return (NULL);
if (index == 1)
{
*head = current->next;
free(current);
current = NULL;
}
else
{
while (index != 1)
{
previous = current;
current = current->next;
index--;
}
previous->next = current->next;
free(current);
current = NULL;
}
}
