#ifndef _SEARCH_H_
#define _SEARCH_H_
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t size);
int _advanced_binary(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int jump_search(int *array, size_t size, int value);
#endif
