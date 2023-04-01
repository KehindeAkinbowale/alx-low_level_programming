#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: a pointer to the pointer inside the node
* @str: string pointer to be duplicated
* Return: The address to the new node otherwose return NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *my_node;
unsigned int i = 0;
list_t *temp;
temp = *head;
while (str[i] != '\0')
{
i++;
}
my_node = malloc(sizeof(list_t));
if (my_node == NULL)
return (NULL);
my_node->str = strdup(str);
my_node->len = i;
my_node->next = NULL;

if ((*head) == NULL)
{
(*head) = my_node;
return (my_node);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = my_node;
return (my_node);
}
