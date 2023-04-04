#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* sum_listint - a function that returns the sum of all data in th list
* @head: a pointer to the node of the list
* Returns: sum of all data present in the list or 0 if empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr;
if (head == NULL)
return (0);
ptr = head;
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
