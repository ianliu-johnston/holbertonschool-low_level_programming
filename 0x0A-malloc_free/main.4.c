#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
/*
 Expected output:
 julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
 julien@ubuntu:~/0x0a. malloc, free$ valgrind ./f
 ==5013== Memcheck, a memory error detector
 ==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
 ==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
 ==5013== Command: ./f
 ==5013== 
 0 0 0 0 0 0 
 0 0 0 0 0 0 
 0 0 0 0 0 0 
 0 0 0 0 0 0 

 0 0 0 98 0 0 
 0 0 0 0 0 0 
 0 0 0 0 0 0 
 0 0 0 0 402 0 
 ==5013== 
 ==5013== HEAP SUMMARY:
 ==5013==     in use at exit: 0 bytes in 0 blocks
 ==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
 ==5013== 
 ==5013== All heap blocks were freed -- no leaks are possible
 ==5013== 
 ==5013== For counts of detected and suppressed errors, rerun with: -v
 ==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
 */
