#include <stdio.h>
// int main(void){
//     int start, end,i;

//     printf("Enter Starting Number: ");
//     scanf("%d", &start);

//     printf("Enter Ending Number: ");
//     scanf("%d", &end);
//    int size = end - start + 1;  
//    printf("Array size: %d\n", size);  
//     int num[size];                  

//     printf("Numbers in array:\n");
//     for (int i = 0; i < size; i++) {
//         num[i] = start + i;
//         printf("%d ", num[i]);
//     }
//         int max = num[0]; // প্রথম সংখ্যাটাকে বড় ধরে নিচ্ছি

//     for (int i = 1; i < size; i++) {
//         if (num[i] > max) {
//             max = num[i]; // নতুন বড় সংখ্যা পেলে max আপডেট করবো
//         }
//     }

//     printf("\nLargest number in array: %d\n", max);

//     return 0;
// }

int main(void){
   int arr_size;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &arr_size);

    int arr[arr_size];
    printf("Enter %d Elements: ", arr_size);
    for(int i = 0; i< arr_size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal Array: ");
    for(int i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);  
    }
    int largest = arr[0];

    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("\n Greatest Element: %d",largest);

    return 0;
}