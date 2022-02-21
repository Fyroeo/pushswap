/*
** EPITECH PROJECT, 2021
** B_CPE_110_LYN_1_1_pushswap_thomas_mazaud
** File description:
** Utils for the operations
*/

#include "../includes/pushswap.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void delete_node(list_t **from)
{
    if (*from == (*from)->next) {
        (*from) = NULL;
    } else {
        (*from)->prev->next = (*from)->next;
        (*from)->next->prev = (*from)->prev;
        (*from) = (*from)->next;
    }
}

int is_sorted(list_t *list, int argc)
{
    int i = 0;

    while (i < argc - 1) {
        if (list->data < list->next->data)
            i++;
        else
            return (0);
        list = list->next;
    }
    return (1);
}
