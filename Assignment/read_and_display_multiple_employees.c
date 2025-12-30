
/*
Name: Md. Shimon Mia
ID: 42250303017
section: E
Date: 30-12-2025
*/


#include <stdio.h>


int main() {
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct {
            int id;
            char name[50];
            float salary;
        } emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter employee %d ID: ", i + 1);
        scanf("%d", &emp[i].id);

        printf("Enter employee %d name: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter employee %d salary: ", i + 1);
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
            emp[i].id, emp[i].name, emp[i].salary);
    }

    return 0;
}
