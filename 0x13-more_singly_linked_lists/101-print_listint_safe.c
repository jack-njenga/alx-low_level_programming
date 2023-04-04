#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 * Output format: see example
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tmp = head, *loop_start = NULL;
    size_t count = 0;

    while (tmp)
    {
        count++;
        printf("[%p] %d\n", (void *)tmp, tmp->n);
        if (tmp->next >= tmp)
        {
            loop_start = tmp;
            break;
        }
        tmp = tmp->next;
    }

    if (loop_start)
    {
        printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
        exit(98);
    }

    return count;
}
