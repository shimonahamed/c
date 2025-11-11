// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);   
//     }

//     printf("\nOriginal array:");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\nReversed array: ");
//     for(int i = n - 1; i >= 0; i--){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
















#include <stdio.h>
int main(void){
    int num;
    printf("Enter The Number Of Elements: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d Elements: ",num);
   for(int i = 0 ; i < num ; i++){
    scanf("%d",&arr[i]);
   }

   printf("\nOriginal Array: ");
    for(int i = 0 ; i < num ; i++){
        printf("%d ",arr[i]);  
    }
    printf("\nReversed Array: ");
    for(int i = num -1 ; i >= 0 ; i--){
        printf("%d ",arr[i]);  

    }
    
}
