/*Sum of Prime Numbers in a Given Range*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 section: E
 Date: 16-11-2025
 */

#include <stdio.h>

#include <stdio.h>

int main(void) {
    int num;

    printf("This Array Length: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter %d Numbers: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");

    for (int i = 0; i < num; i++) {
        int number = arr[i];
        int isPrime = 1;

        if (number <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= number / 2; j++) {
                if (number % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1) {
            printf("%d ", number);
        }
    }

    printf("\n");
    return 0;
}

