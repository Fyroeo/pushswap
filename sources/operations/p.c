/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** p operations
*/

#include "../../includes/pushswap.h"

void action_p(list_t **from, list_t **to)
{
    list_t *temp;
    list_t *temp2;

    if (!*from)
        return;
    temp = *from;
    delete_node(from);
    if (*to) {
        temp2 = (*to)->prev;
        (*to)->prev = temp;
        (*to)->prev->next = (*to);
        (*to)->prev->prev = temp2;
        (*to)->prev->prev->next = temp;
        *to = (*to)->prev;
    } else {
        (*to) = temp;
        (*to)->prev = (*to);
        (*to)->next = (*to);
    }
}
