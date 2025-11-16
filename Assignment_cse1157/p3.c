/*Reverse An Array*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 section: E
 Date: 16-11-2025
 */




#include <stdio.h>
int main(void){
    int num;
    printf("This Array Length: ");
    scanf("%d",&num);
    int arr[num];

    printf("Enter %d Numbers: ",num);
   for(int i = 0 ; i < num ; i++){
    scanf("%d",&arr[i]);
   }

    printf("\nReversed array: ");
    for(int i = num -1 ; i >= 0 ; i--){
        printf("%d ",arr[i]);  

    }
    return 0;
    
}
