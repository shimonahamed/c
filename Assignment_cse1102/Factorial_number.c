#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
