#ifndef MAIN_H
#define MAIN_H

/*
 * File name : main.h
 *
 * Description: Header file that contains prototypes for all functions
 *       written in ALX project 0x13-bit_manipulation directory.
 */

int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif /* MAIN_H */

