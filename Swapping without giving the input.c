/*
 ============================================================================
 Name        : Swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	printf("Enter the 2 numbers");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swaping a=%d b=%d", a,b);
	return EXIT_SUCCESS;
}
