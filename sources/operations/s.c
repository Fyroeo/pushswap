/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** s operations
*/

#include "../../includes/pushswap.h"

void action_s(list_t **list)
{
    int tmp;

    if ((*list)->next == (*list))
        return;
    tmp = (*list)->data;
    (*list)->data = (*list)->next->data;
    (*list)->next->data = tmp;
}
