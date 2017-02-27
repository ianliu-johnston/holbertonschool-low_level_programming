#include "sort.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct is_algo{
	char *algo;
	void (*f)();
}is_algo_t;

void (*is_builtin(char *req_algo))()
{
	size_t i = 0;
	is_algo_t which[] = {
		{"bubble", bubble_sort},
		{"insertion", insertion_main},
		{"selection", selection_sort},
		{"quick", quick_sort},
		{"shell", shell_sort},
		{"counting", counting_sort},
		{"merge", merge_sort},
		{"heap", heap_sort},
		{NULL, NULL}
	};

	while (*which[i].f != NULL)
	{
		if(strncmp(which[i].algo, req_algo, strlen(which[i].algo)) == 0)
			return (which[i].f);
		i++;
	}
	return(NULL);
}
void print_err(const char *prog_name, int err_code)
{
	fprintf(stderr, "Usage: %s <algorithm> <array of integers>\n", prog_name);
	if (err_code == 1)
		fprintf(stderr, "Algorithm not found.\n");
	else if (err_code == -1)
	{
		printf("\tSorts an array of integers with a specified algorithm. For a default array, do not include any arguments after the algorithm name.\n");
		printf("\tIncluded Algorithm keywords:\n");
		printf("\tbubble, ");
		printf("insertion, ");
		printf("selection, ");
		printf("quick, ");
		printf("shell, ");
		printf("counting, ");
		printf("merge, ");
		printf("heap\n");
		printf("\tExample:\n");
		printf("\t%s bubble 52 23 11 1 50 6\n", prog_name);
	}
	exit(EXIT_FAILURE);
}
void print_help(const char *prog_name)
{
	print_err(prog_name, -1);
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int i = 0, j = 0;
	int *usr_arr = NULL;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = ac > 3 ? (size_t)ac - 2 : sizeof(array) / sizeof(array[0]);

	if (ac < 2)
		print_err(av[0], 0);
	if (ac > 3)
	{
		usr_arr = malloc((ac - 3) * sizeof(int));
		if(!usr_arr)
			return (EXIT_FAILURE);
		for(i = 0; i < ac - 2; i++)
		{
			for (j = 0; av[i + 2][j]; j++)
				if (j != 0 && !(isdigit(av[i + 2][j])))
					print_err(av[0], 0);
			usr_arr[i] = atoi(av[i + 2]);
		}
	}

	/*
	printf("\x1b[32m");
	*/
	print_array(ac > 2 ? usr_arr: array, n);
    putchar('\n');
	/*
	printf("\x1b[0m");
	*/
	if (strncmp(av[1], "help", 4) == 0)
		print_help(av[0]);
	else if (is_builtin(av[1]) != NULL)
		is_builtin(av[1])(ac > 3 ? usr_arr: array, n);
	else
		print_err(av[0], 1);
    putchar('\n');
	/*
	printf("\x1b[32m");
	*/
    print_array(ac > 2 ? usr_arr: array, n);
	/*
	printf("\x1b[0m");
	*/
	if (ac > 2)
		free(usr_arr);
    return (EXIT_SUCCESS);
}
