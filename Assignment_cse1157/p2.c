/*Count Even and Odd Numbers in an Array*/
/*
Name: Mst. Mim Akter
ID: 42250303018
section: E
Date: 12-11-2025
*/



#include <stdio.h>

int main(void) {
    int n;
    printf("This Array Length: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers: \n", n);
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int even_count = 0;
    int odd_count = 0;

    for ( int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        even_count++;
        else
        odd_count++;
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}
