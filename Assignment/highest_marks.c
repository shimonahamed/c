
/*
Name: Md. Shimon Mia
ID: 42250303017
section: E
Date: 29-12-2025
*/


#include <stdio.h>

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct {
        char name[50];
        int marks;
    } s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %d\n", s[maxIndex].marks);

    return 0;
}
