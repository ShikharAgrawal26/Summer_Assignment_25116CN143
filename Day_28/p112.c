#include <stdio.h>
struct Contact {
    int id;
    char name[50];
    char phone[15];
};
int main() {
    struct Contact c[100];
    int n = 0, choice, i, cid;
    while (1) {
        printf("\n1.Add  2.Display  3.Search  4.Delete  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("ID: ");    scanf("%d", &c[n].id);
            printf("Name: ");  scanf(" %[^\n]", c[n].name);
            printf("Phone: "); scanf(" %[^\n]", c[n].phone);
            n++;
            printf("Contact added!\n");
        } else if (choice == 2) {
            if (n == 0) { printf("No contacts.\n"); continue; }
            printf("\n%-5s %-20s %-15s\n", "ID", "Name", "Phone");
            for (i = 0; i < n; i++)
                printf("%-5d %-20s %-15s\n", c[i].id, c[i].name, c[i].phone);
        } else if (choice == 3) {
            printf("Enter ID: "); scanf("%d", &cid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (c[i].id == cid) {
                    printf("ID: %d | Name: %s | Phone: %s\n",
                           c[i].id, c[i].name, c[i].phone);
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 4) {
            printf("Enter ID to delete: "); scanf("%d", &cid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (c[i].id == cid) {
                    for (int j = i; j < n - 1; j++)
                        c[j] = c[j + 1];
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