#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate and print factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}
