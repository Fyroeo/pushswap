/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** PushSwap
*/

#include "../includes/pushswap.h"

void pushswap(int argc, char **av)
{
    list_t *list_a = init(av);
    list_t *list_b = NULL;
    argc--;
    save_t save;

    if (is_sorted(list_a, argc)) {
        write(1, "\n", 1);
        return;
    }
    for (save.i = 0; save.i < 31; save.i++) {
        save.k = 0;
        pos_radix_sorter(&list_a, &list_b, &save, argc);
    }
    save.k = 0;
    neg_radix_sorter(&list_a, &list_b, &save, argc);
    write(1, "rb\n", 3);
}
