int main() {
    // Declare a float variable for the radius of a circle.
    float radius = 21.0;

    // Declare a double variable for the constant Pi.
    double PI = 3.141592653;

    // Calculate the circumference of the circle using the formula: circumference = 2 x PI x radius.
    double circumference = 2 * PI * radius;

    // Demonstrate type conversion: Explicitly convert the floating-point circumference to an integer and store it in a new variable.
    int circumference_as_int = (int)circumference;

    // Declare a double variable for Planck's constant (6.626 x 10^-34).
    double plancks_constant = 6.626e-34;

    // Print the radius of the circle with 2 decimal places.
    printf("Radius of the circle: %.2f\n", radius);

    // Print the floating-point circumference with 3 decimal places.
    printf("Circumference of the circle: %.3f\n", circumference);

    // Print the integer-converted circumference.
    printf("Circumference as an integer: %d\n", circumference_as_int);

    // Print Planck’s constant in scientific notation.
    printf("Planck's constant: %.3e\n", plancks_constant);

    return 0;
}
