#ifndef MAIN_H
#define MAIN_H

int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);
int _atoi(const char *s);

#endif


