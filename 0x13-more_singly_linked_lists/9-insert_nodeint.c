#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
* insert_nodeint_at_index - a function that inserts a new node at an index
* @head: a pointer to listint_t list
* @idx: index postion to add the node
* @n: int data inside the listint_t list
* Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *ptr;
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if ((new_node == NULL) || (head == NULL))
return (NULL);
new_node->n = n;
new_node->next = NULL;
ptr = (*head);
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (k = 0; ptr && k < idx; k++)
if (k == idx - 1)
{
ptr = ptr->next;
idx--;
new_node->next = ptr->next;
ptr->next = new_node;
return (new_node);
}
else
ptr = ptr->next;
return (NULL);
}
