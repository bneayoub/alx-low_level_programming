#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
