#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* pop_listint - a function that deletes the head node of a listint_t
* @head: a pointer to the first node of the listint_t
* Return: the data present inside the listint_t node
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *ptr;
if ((head == NULL) || ((*head) == NULL))
return (0);
n = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (n);
}
