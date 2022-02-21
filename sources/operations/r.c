/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** R Operations
*/

#include "../../includes/pushswap.h"

void f_to_e(list_t **list)
{
    *list = (*list)->next;
}

void e_to_f(list_t **list)
{
    *list = (*list)->prev;
}
