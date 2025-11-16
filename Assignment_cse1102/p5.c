/*Factorial of a Number*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 Section: E
 Date: 12-11-2025
 */




#include <stdio.h>

int main(void) {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial = 1;
    if (n < 0) {
        printf("This will not be a factorial number.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
