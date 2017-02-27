#ifndef INSERTION_H
#define INSERTION_H

#include <stdio.h>

listint_t *create_listint(const int *array, size_t size);
void print_list_rev(const listint_t *list);
void printarr(int array[], size_t i, size_t j);
void insertion_sort_arr(int array[], size_t size);
void insertion_main(int *array, size_t n);
#endif
