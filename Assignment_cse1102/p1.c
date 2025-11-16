/*Check Whether a Number is an Armstrong Number*/
/*
Name: Mst. Mim Akter
ID: 42250303018
Section: E
Date: 10-11-2025
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);  
     int num = n;
   int armstrong = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        armstrong += remainder * remainder * remainder;
        n = n / 10;
    }

    if (armstrong == num){
        printf("%d is an Armstrong number.\n", num);
    }else{
        printf("%d is not an Armstrong number.\n", num);
    }
        return 0;
    
}