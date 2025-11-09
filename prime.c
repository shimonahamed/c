// #include <stdio.h>

// int main(void) {
//     int n, i, isPrime = 1; // ধরে নিচ্ছি n প্রাইম

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n <= 1) {
//         // 0, 1, এবং ঋণাত্মক সংখ্যা প্রাইম নয়
//         isPrime = 0;
//     } else {
//         for (i = 2; i <= n / 2; i++) {
//             if (n % i == 0) {
//                 isPrime = 0; // ভাগ হয়ে গেছে, প্রাইম নয়
//                 break;
//             }
//         }
//     }

//     if (isPrime == 1)
//         printf("%d is a prime number.\n", n);
//     else
//         printf("%d is not a prime number.\n", n);

//     return 0;
// }


#include <stdio.h>

int main(void) {
    int start, end;
            int count = 0;

    printf("Enter Starting Number: ");
    scanf("%d", &start);

    printf("Enter Ending Number: ");
    scanf("%d", &end);

    // প্রতিটি সংখ্যার জন্য চেক করবো
    for (int i = start; i <= end; i++) {
        int isPrime = 1; // ধরে নিচ্ছি প্রাইম

        if (i <= 1) {
            isPrime = 0; // 0 ও 1 প্রাইম নয়
        } else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0; // ভাগ হয়ে গেছে, প্রাইম নয়
                    break;
                }
            }
        }

        if (isPrime == 1){
            printf("%d is a prime number.\n", i);
            count +=i;

        }
        else
            printf("%d is not a prime number.\n", i);
    }
     printf("\nSum of all prime numbers = %d\n", count);

    return 0;
}
