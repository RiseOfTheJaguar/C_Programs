#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float num1 = 0, num2 = 0, num3 = 0, average = 0;

    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average value = %.2f\n", average);

    return EXIT_SUCCESS;
}
