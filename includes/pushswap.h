/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    //Structures double circular linked list
    typedef struct list {
        int data;
        struct list *next;
        struct list *prev;
    } list_t;

    //To bypass the args limit of the coding style
    typedef struct save {
        int i;
        int k;
    } save_t;

    //Operations
    void action_s(list_t **list);
    void action_p(list_t **from, list_t **to);
    void f_to_e(list_t **);
    void e_to_f(list_t **);

    //Utils
    void delete_node(list_t **);
    int is_sorted(list_t *, int);
    void my_put_nbr(int);
    void my_putchar(char);

    //List
    struct list *init(char **);

    //Radix Sorter
    void pos_radix_sorter(list_t **, list_t **, save_t *, int);
    void neg_radix_sorter(list_t **, list_t **, save_t *, int);

    //Pushswap
    void pushswap(int, char **);
#endif /* !PUSHSWAP_H_ */
