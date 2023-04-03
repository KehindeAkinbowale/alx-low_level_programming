#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* free_listint2 - a function that frees a listint_t list
* @head: a pointer to the first node of the list
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *ptr_temp;
if (head == NULL)
return;
while (head != NULL)
{
ptr_temp = (*head)->next;
free(*head);
(*head) = ptr_temp;
}
(*head) = NULL;
}
