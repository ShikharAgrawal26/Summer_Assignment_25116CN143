#include <stdio.h>
struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0, choice, i, sid;
    while (1) {
        printf("\n1.Add  2.Display  3.Search  4.Delete  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("ID: ");    scanf("%d", &s[n].id);
            printf("Name: ");  scanf(" %[^\n]", s[n].name);
            printf("Age: ");   scanf("%d", &s[n].age);
            printf("Marks: "); scanf("%f", &s[n].marks);
            n++;
            printf("Student added!\n");
        } else if (choice == 2) {
            if (n == 0) { printf("No records.\n"); continue; }
            printf("\n%-5s %-20s %-5s %-7s\n", "ID", "Name", "Age", "Marks");
            for (i = 0; i < n; i++)
                printf("%-5d %-20s %-5d %.2f\n", s[i].id, s[i].name, s[i].age, s[i].marks);
        } else if (choice == 3) {
            printf("Enter ID: "); scanf("%d", &sid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].id == sid) {
                    printf("ID: %d | Name: %s | Age: %d | Marks: %.2f\n",
                           s[i].id, s[i].name, s[i].age, s[i].marks);
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 4) {
            printf("Enter ID to delete: "); scanf("%d", &sid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (s[i].id == sid) {
                    for (int j = i; j < n - 1; j++)
                        s[j] = s[j + 1];
                    n--;
                    printf("Deleted!\n");
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");

        } else if (choice == 5) {
            printf("Goodbye!\n"); break;

        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}