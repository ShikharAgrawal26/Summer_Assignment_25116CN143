#include <stdio.h>
#include <string.h>
#define MAX 100
int id[MAX], n = 0;
char name[MAX][50], dept[MAX][30];
float salary[MAX];
int main() {
    int choice, i, j, k;
    float sum;
    while (1) {
        printf("\n1.Add 2.Display 3.Search 4.Update 5.Delete 6.Dept Filter 7.Highest Salary 8.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 8) { printf("Bye!\n"); break; }
        if (choice == 1) {
            printf("ID: "); scanf("%d", &id[n]);
            printf("Name: "); scanf(" %[^\n]", name[n]);
            printf("Dept: "); scanf(" %[^\n]", dept[n]);
            printf("Salary: "); scanf("%f", &salary[n]);
            n++; printf("Added.\n");
        }
        else if (choice == 2) {
            printf("\n%-5s %-20s %-15s %-10s\n", "ID", "Name", "Dept", "Salary");
            printf("--------------------------------------------------\n");
            for (i = 0; i < n; i++)
                printf("%-5d %-20s %-15s %-10.2f\n", id[i], name[i], dept[i], salary[i]);
        }
        else if (choice == 3) {
            printf("ID: "); scanf("%d", &k);
            for (i = 0; i < n; i++)
                if (id[i] == k) { printf("%d %-20s %-15s %.2f\n", id[i], name[i], dept[i], salary[i]); break; }
            if (i == n) printf("Not found.\n");
        }
        else if (choice == 4) {
            printf("ID: "); scanf("%d", &k);
            for (i = 0; i < n; i++) if (id[i] == k) {
                printf("New Name: "); scanf(" %[^\n]", name[i]);
                printf("New Dept: "); scanf(" %[^\n]", dept[i]);
                printf("New Salary: "); scanf("%f", &salary[i]);
                printf("Updated.\n"); break;
            }
            if (i == n) printf("Not found.\n");
        }
        else if (choice == 5) {
            printf("ID: "); scanf("%d", &k);
            for (i = 0; i < n; i++) if (id[i] == k) {
                for (j = i; j < n-1; j++) {
                    id[j]=id[j+1]; salary[j]=salary[j+1];
                    strcpy(name[j], name[j+1]); strcpy(dept[j], dept[j+1]);
                }
                n--; printf("Deleted.\n"); break;
            }
            if (i == n) printf("Not found.\n");
        }
        else if (choice == 6) {
            printf("Dept: "); scanf(" %[^\n]", dept[MAX-1]);
            sum = 0; k = 0;
            for (i = 0; i < n; i++) if (strcmp(dept[i], dept[MAX-1]) == 0) {
                printf("%d %-20s %.2f\n", id[i], name[i], salary[i]);
                sum += salary[i]; k++;
            }
            if (k) printf("Count:%d  Total Salary:%.2f  Avg:%.2f\n", k, sum, sum/k);
            else printf("No employees in this dept.\n");
        }
        else if (choice == 7) {
            k = 0;
            for (i = 1; i < n; i++) if (salary[i] > salary[k]) k = i;
            printf("Highest: %d %-20s %-15s %.2f\n", id[k], name[k], dept[k], salary[k]);
        }
        else printf("Invalid!\n");
    }
    return 0;
}