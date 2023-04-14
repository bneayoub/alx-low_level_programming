#ifndef MAIN_H
#define MAIN_H

int _putchar(char s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int check_digits(const char *str);
char *add_strings(char *num1, char *num2);
char *multiply_strings(const char *num1, const char *num2);
int main(int argc, char *argv[]);


#endif