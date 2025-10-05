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
	float area, length, width;
	printf("the value of length and width");
	scanf("%f %f",&length,&width);
	area=length*width;
	printf("enter area %f", area);
	return EXIT_SUCCESS;
}
