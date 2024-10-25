#include <stdio.h>
int main() {
    int number1; /* first integer read from user */
    int number2; /* second integer read from user */
    int number3; /* third integer read from user */
    int smallest; /* smallest integer read from user */
    int largest; /* largest integer read from user */

    // prompt user for input
    printf("Input three different integers: ");
    scanf("%d%d%d", &number1, &number2, &number3); // use & to read addresses

    // determine the largest number
    largest = number1; // assume first integer is largest
    if (number2 > largest) // is number2 larger?
        largest = number2; // number2 is now the largest
    if (number3 > largest) // is number3 larger?
        largest = number3; // number3 is now the largest

    // determine the smallest number
    smallest = number1; // assume first integer is smallest
    if (number2 < smallest) // is number2 smaller?
        smallest = number2; // number2 is now the smallest
    if (number3 < smallest) // is number3 smaller?
        smallest = number3; // number3 is now the smallest

    // calculate and display sum, average, product, smallest, and largest
    printf("Sum is %d\n", number1 + number2 + number3);
    printf("Average is %.2f\n", (number1 + number2 + number3) / 3.0); // use 3.0 to ensure float division
    printf("Product is %d\n", number1 * number2 * number3);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
