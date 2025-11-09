#include <stdio.h>

// Structure তৈরি করা হলো
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1; // Student টাইপের একটি ভেরিয়েবল

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    scanf("%s", s1.name);  // স্পেস ছাড়া নাম দিতে হবে

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\n----- Student Details -----\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    // মার্কস অনুযায়ী ফলাফল
    if (s1.marks >= 80)
        printf("Grade: A+\n");
    else if (s1.marks >= 70)
        printf("Grade: A\n");
    else if (s1.marks >= 60)
        printf("Grade: B\n");
    else if (s1.marks >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}
