#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* add_nodeint - a function that adds a new node at the beginning of a list
* @head: the first pointer node pointing to another node
* @n: int data present in the listint_t struct
* Return: the address of the new element or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *my_node;
my_node = malloc(sizeof(listint_t));
if (my_node == NULL)
return (NULL);
my_node->n = n;
my_node->next = (*head);
(*head) = my_node;
return (my_node);
}
