/*
 ============================================================================
 Name        : TP1.c
 Author      : Kaba Saran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "tp1.h"

#define FIBO_SIZE 5
#define MIN_VALUE 0

int main(void) {
	puts("!!!Hello all the World !!!");


	uint32_t output_array[FIBO_SIZE];//__attribute__ ((section (".bss_output_array")));;

	fibonacci(output_array, FIBO_SIZE, MIN_VALUE);

	test();
	puts("!!Terminer !!!");

	return EXIT_SUCCESS;
}