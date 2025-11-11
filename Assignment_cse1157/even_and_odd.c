#include <stdio.h>

int main(void) {
    int n,limit;
    printf("What number will it start with?: ");
    scanf("%d", &n);

    printf("Up to how many numbers?: ");
    scanf("%d", &limit);
    for ( int i = n; i < limit; i++)
    {
        if (i % 2 == 0)
        printf("%d is even.\n", i);
    else
        printf("%d is odd.\n", i);
    }

    return 0;
}
