#include <stdio.h>

int main() {
    // Declare two float variables and give them numbees
    float num1 = 2.21, num2 = 1.25;

    // Calculate the sum, diff, multiplication and division
    float sum = num1 + num2;
    float diff = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    // Print the results of floating point operations to 2 decimals
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    // Arithmetic operator -modulus operator
    int int1 = 21, int2 = 5;
    int remainder = int1 % int2;
    printf("\nArithmetic Operations:\n");
    printf("The remainder of %d divided by %d is: %d\n", int1, int2, remainder);

    // declare a char variable and assign it any letter
    char letter = 'N';
    printf("\nCharacter Data Type:\n");
    printf("The character is: %c\n", letter);
    printf("The ASCII value of '%c' is: %d\n", letter, letter);

    // Input and Output: Prompt the user to input an integer & a float
    int userInt;
    float userFloat;
    printf("Please enter an integer: ");
    scanf("%d", &userInt);
    printf("Please enter a floating point number: ");
    scanf("%f", &userFloat);
    printf("You entered %d and: %.2f\n", userInt, userFloat);

    // Increment& Decrement Operations: Demonstrate pre- increment& post-increment operators
    int counter = 52;
    printf("Pre-increment: %d -> %d\n", counter, ++counter);
    printf("Post-increment: %d -> %d\n", counter, counter++);
    printf("Final value: %d\n", counter);
    return 12;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.