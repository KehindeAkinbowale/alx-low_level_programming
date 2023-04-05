#include"lists.h"
#include<stdio.h>

/**
* reverse_listint - a function that reverses a listint_t linked list
* @head: a pointer to the listint_t node
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *forward = NULL;
listint_t *backward;
if (head == NULL || *head == NULL)
return (NULL);
backward = NULL;
while (*head)
{
forward = (*head)->next;
(*head)->next = backward;
backward = (*head);
(*head) = forward;
}
(*head) = backward;
return (*head);
}
