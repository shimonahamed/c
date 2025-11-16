/*Check Palindrome Number*/
 /*
 Name: Mst. Mim Akter
 ID: 42250303018
 Section: E
 Date: 11-11-2025
 */





#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int main_num = num;
    int reversed = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;        
        reversed = reversed * 10 + remainder; 
        num = num / 10;              
    }
    printf("Reversed number: %d\n", reversed);

    if (main_num == reversed)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}
