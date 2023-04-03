#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* add_nodeint_end - a function that adds a new node at the end of a list
* @head: a pointer node to the first node of the list
* @n: int data present in the list_t struct
* Return: the address of the new elements or node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *my_node;
listint_t *ptr;
ptr = (*head);
my_node = malloc(sizeof(listint_t));
if (my_node == NULL)
return (NULL);
my_node->n = n;
my_node->next = NULL;
if ((*head) == NULL)
{
(*head) = my_node;
return (my_node);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = my_node;
return (my_node);
}
