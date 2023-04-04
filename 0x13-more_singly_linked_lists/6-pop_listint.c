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
listint_t *ptr;
listint_t *temp;
temp = (*head);
if (head == NULL)
return (0);
(*head)= (*head)->next;
free(temp);
temp = NULL;
ptr = (*head);
return (ptr->n);
}
