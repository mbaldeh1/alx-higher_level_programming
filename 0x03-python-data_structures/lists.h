"#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);



void reverse_listint(listint_t **head);

int is_palindrome(listint_t **head);



#endif /* LISTS_H */"
 https://github.com/Sjallow/alx-higher_level_programming/blob/master/0x03-python-data_structures/lists.h#:~:text=%23ifndef%20LISTS_H,/*%20LISTS_H%20*/
