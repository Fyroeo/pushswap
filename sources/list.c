/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** File to create the doubly circular linked list
*/

#include "../includes/pushswap.h"

static int getnumber(char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}

void others(char **av, list_t **first_node, list_t **last_node, list_t **node)
{
    list_t *node_next;

    for (int i = 2; av[i]; i++) {
        node_next = malloc(sizeof(list_t));
        node_next->data = getnumber(av[i]);
        node_next->next = *first_node;
        (*node)->next = node_next;
        *last_node = *node;
        *node = (*node)->next;
        (*node)->prev = *last_node;
    }
}

struct list *init(char **av)
{
    list_t *first_node;
    list_t *last_node = NULL;
    list_t *node = malloc(sizeof(list_t));

    node->data = getnumber(av[1]);
    node->next = node;
    node->prev = node;
    first_node = node;
    others(av, &first_node, &last_node, &node);
    last_node = node;
    node = node->next;
    node->prev = last_node;
    return node;
}
