<pre><code>alex@/tmp/huffman_rb_trees$ cat 5-main.c
#include <stdlib.h>
#include <stdio.h>
#include "huffman.h"

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
    symbol_t *symbol;

    symbol = symbol_create('d', 3);
    if (symbol == NULL)
    {
        fprintf(stderr, "Failed to create a symbol\n");
        return (EXIT_FAILURE);
    }
    printf("Symbol: data(%c) frequency(%lu)\n", symbol->data, symbol->freq);

    symbol = symbol_create('H', 98);
    if (symbol == NULL)
    {
        fprintf(stderr, "Failed to create a symbol\n");
        return (EXIT_FAILURE);
    }
    printf("Symbol: data(%c) frequency(%lu)\n", symbol->data, symbol->freq);

    return (EXIT_SUCCESS);
}
