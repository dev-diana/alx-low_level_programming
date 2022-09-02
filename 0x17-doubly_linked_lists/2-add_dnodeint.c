#include "lists.h"

/**

 * add_dnodeint- Insert new node at the beginnig

 * @head: Is the pointer to the direction of the head

 * @n:The data integer

 * Return: The new node

 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{

	dlistint_t *new_mem;

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)

		return (NULL);

	new_mem->n = n;

	new_mem->prev = NULL;

	new_mem->next = *head;

	if (*head != NULL)

		(*head)->prev = new_mem;

	*head = new_mem;

	return (new_mem);

}
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
