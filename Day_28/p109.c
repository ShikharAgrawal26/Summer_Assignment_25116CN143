#include <stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    int year;
    int available;  /* 1 = available, 0 = issued */
};
int main() {
    struct Book b[100];
    int n = 0, choice, i, bid;
    while (1) {
        printf("\n1.Add  2.Display  3.Search  4.Issue  5.Return  6.Delete  7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("ID: ");     scanf("%d", &b[n].id);
            printf("Title: ");  scanf(" %[^\n]", b[n].title);
            printf("Author: "); scanf(" %[^\n]", b[n].author);
            printf("Year: ");   scanf("%d", &b[n].year);
            b[n].available = 1;
            n++;
            printf("Book added!\n");
        } else if (choice == 2) {
            if (n == 0) { printf("No records.\n"); continue; }
            printf("\n%-5s %-25s %-20s %-6s %-10s\n",
                   "ID", "Title", "Author", "Year", "Status");
            for (i = 0; i < n; i++)
                printf("%-5d %-25s %-20s %-6d %-10s\n",
                       b[i].id, b[i].title, b[i].author, b[i].year,
                       b[i].available ? "Available" : "Issued");
        } else if (choice == 3) {
            printf("Enter ID: "); scanf("%d", &bid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == bid) {
                    printf("ID     : %d\n",  b[i].id);
                    printf("Title  : %s\n",  b[i].title);
                    printf("Author : %s\n",  b[i].author);
                    printf("Year   : %d\n",  b[i].year);
                    printf("Status : %s\n",  b[i].available ? "Available" : "Issued");
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 4) {
            printf("Enter ID to issue: "); scanf("%d", &bid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == bid) {
                    if (b[i].available)  { b[i].available = 0; printf("Book issued!\n"); }
                    else                   printf("Book already issued!\n");
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 5) {
            printf("Enter ID to return: "); scanf("%d", &bid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == bid) {
                    if (!b[i].available) { b[i].available = 1; printf("Book returned!\n"); }
                    else                   printf("Book was not issued!\n");
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 6) {
            printf("Enter ID to delete: "); scanf("%d", &bid);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == bid) {
                    for (int j = i; j < n - 1; j++)
                        b[j] = b[j + 1];
                    n--;
                    printf("Deleted!\n");
                    found = 1; break;
                }
            }
            if (!found) printf("Not found.\n");
        } else if (choice == 7) {
            printf("Goodbye!\n"); break;

        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}