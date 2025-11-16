
/*Find the Greatest Number among 3 Numbers*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 Section: E
 Date: 11-11-2025
 */



#include <stdio.h>

int main(void){
   int num = 3;
    int array[num];
    printf("Write %d numbers.: ", num);
    for(int i = 0; i< num; i++){
        scanf("%d", &array[i]);
    }
    int greatest = array[0];

    for (int i = 1; i < num; i++)
    {
        if (array[i] > greatest) {
            greatest = array[i];
        }
    }
    
    printf("\n The greatest number is: %d\n",greatest);
    return 0;
}