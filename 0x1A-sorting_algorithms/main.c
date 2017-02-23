#include "sort.h"
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
		{"selection", selection_sort},
		{"insertion", insertion_main},
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


	if (ac == 0)
	{
		printf("Usage: %s <algorithm> <array of integers>\n", av[0]);
		exit(EXIT_FAILURE);
	}
	if (ac > 3)
	{
		usr_arr = malloc((ac - 3) * sizeof(int));
		for(i = 0; i < ac - 2; i++)
		{
			for (j = 0; av[i + 2][j]; j++)
				if (j != 0 && !(isdigit(av[i + 2][j])))
					printf("Usage: %s <algorithm> <array of integers>\n", av[0]), \
						exit(EXIT_FAILURE);
			usr_arr[i] = atoi(av[i + 2]);
		}
	}

    print_array(ac > 2 ? usr_arr: array, n);
    putchar('\n');
	if (is_builtin(av[1]) != NULL)
		is_builtin(av[1])(ac > 3 ? usr_arr: array, n);
	else
		printf("Algorithm not found.\nUsage: %s <sorting algorithm> <array of integers>\n", av[0]);
    putchar('\n');
    print_array(ac > 2 ? usr_arr: array, n);
	if (ac > 2)
		free(usr_arr);
    return (0);
}
