#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning of a list
* @head: a pointer to another pointer of  node
* @str: string to be duplicated inide the struct
* Return: a new address to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *my_node;
unsigned int k = 0;
while (str[k] != '\0')
{
k++;
}
my_node = malloc(sizeof(list_t));
my_node->str = strdup(str);
my_node->len = k;
my_node->next = (*head);
(*head) = my_node;
return (*head);
}
