/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** Radi Sorter
*/

#include "../includes/pushswap.h"

void pos_radix_sorter(list_t **list_a, list_t **list_b, save_t *save, int args)
{
    for (int j = 1; j <= args; j++) {
        if (((*list_a)->data >> save->i) & 1) {
            action_p(list_a, list_b);
            f_to_e(list_b);
            write(1, "pb rb ", 6);
            save->k++;
        } else {
            f_to_e(list_a);
            write(1, "ra ", 3);
        }
    }
    if (list_b) {
        for (int j = 0; j < save->k; j++) {
            action_p(list_b, list_a);
            write(1, "pa ", 3);
            f_to_e(list_a);
            write(1, "ra ", 3);
        }
    }
}

void neg_radix_sorter(list_t **list_a, list_t **list_b, save_t *save, int args)
{
    for (int j = 1; j <= args; j++) {
        if (((*list_a)->data >> 31) & 1) {
            action_p(list_a, list_b);
            write(1, "pb ", 3);
            save->k++;
        } else {
            f_to_e(list_a);
            write(1, "ra ", 3);
        }
    }
    if (list_b) {
        for (int j = 0; j < save->k; j++) {
            action_p(list_b, list_a);
            write(1, "pa ", 3);
        }
    }
}
