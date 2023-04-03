#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* listint_len - a function that returns the number of nodes in the list
* @h: a pointer to the listint_t struct
* Return: the number of nodes linked to together
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
