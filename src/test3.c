#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Unit test for the factorial function
void test_factorial() {
    int input = 5;
    int expected = 120;
    int result = factorial(input);

    if (result == expected) {
        printf("Factorial Test: PASSED\n");
    } else {
        printf("Factorial Test: FAILED\n");
    }
}

int main() {
    // Run the unit test
    test_factorial();

    return 0;
}
