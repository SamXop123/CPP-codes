#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice;
    int num1, num2, num;
    
    while (1) {
        printf("\n--- Recursive Operations Menu ---\n");
        printf("1. GCD of two numbers\n");
        printf("2. LCM of two numbers\n");
        printf("3. Factorial of a number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
                break;
                
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %llu\n", num, factorial(num));
                break;
                
            case 4:
                printf("Exiting program...\n");
                return 0;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
