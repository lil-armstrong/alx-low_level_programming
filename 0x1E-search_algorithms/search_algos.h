#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int linear_search(int *, size_t, int);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
#endif
