#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "kings");
    hash_table_set(ht, "serafins", "Obelix");
    hash_table_set(ht, "serafins", "Tuna fish?");
    hash_table_set(ht, "depravement", "Holberton");
    hash_table_set(ht, "serafins", "Bowling pins?");
    hash_table_set(ht, "depravement", "is concrete");
    hash_table_set(ht, "serafins", "Magic Djinns?");
    hash_table_set(ht, "serafins", "Mystery");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Street");
	hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
