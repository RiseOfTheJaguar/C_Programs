/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	float sum;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	sum=(float)a/b;
	printf("the value %f",sum);
	return EXIT_SUCCESS;
}
