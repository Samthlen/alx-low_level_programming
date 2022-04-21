#include "lists.h"

/**
 * add_node - adds a new node at the end of a L-list.
 * @head: head of the linked list.
 * @str: string to store in this list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t ichar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (ichar = 0; str[ichar]; ichar++)
		;

	new->len = ichar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
