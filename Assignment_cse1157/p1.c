/* C program to find the second largest element in an array */
/*
Name: Mst. Mim Akter
ID: 42250303018
section: E
Date: 12-11-2025
*/




#include <stdio.h>


int main(void){
   int arr_length;
    printf("This Array Length: ");
    scanf("%d", &arr_length);

    int arr[arr_length];
    printf("Enter %d Number: ", arr_length);
    for(int i = 0; i< arr_length; i++){
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
      int second_largest = -2147483648;

    for (int i = 1; i < arr_length; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    printf("\nThe second largest element is: %d\n", second_largest);

    return 0;
}