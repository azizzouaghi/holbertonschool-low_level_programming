#ifndef FUNCS
#define FUNCS
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
