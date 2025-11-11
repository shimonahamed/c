#include <stdio.h>

// int main() {
//     int age = 0;

//     printf("Enter your age: ");   // Prompt the user
//     scanf("%d", &age); 

//     if (age >= 18) {
//         printf("You are an adult.\n");
//     } else {
//         printf("You are a minor.\n");
//     }

//     return 0;
// }

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while(i <= 5);

    printf("Day:\n");
 int day = 3;

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}


// int main() {
//     int day = 3;

//     switch(day) {
//         case 1:
//             printf("Monday\n");
//             break;
//         case 2:
//             printf("Tuesday\n");
//             break;
//         case 3:
//             printf("Wednesday\n");
//             break;
//         default:
//             printf("Invalid day\n");
//     }

//     return 0;
// }