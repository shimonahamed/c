#include <stdio.h>

int main(void) {
    int num, originalNum, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;        
        reversed = reversed * 10 + remainder; 
        num = num / 10;              
    }

    printf("Reversed number: %d\n", reversed);

    if (originalNum == reversed)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}
