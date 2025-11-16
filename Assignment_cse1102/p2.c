/*Multiplication Table of a Number*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 Section: E
 Date: 10-11-2025
 */

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d This multiplication table display\n", num);
    for(i = 1 ; i<=10; i++){
        printf("%d x %d = %d\n",num,i ,num*i);
    }
    return 0;
}
