#include <stdio.h>
#include <string.h>
#define MAX 10
int roomNo[MAX]  = {101,102,103,201,202,203,301,302,303,304};
char type[MAX][10] = {"Single","Single","Single","Double","Double","Double","Suite","Suite","Suite","Suite"};
float price[MAX] = {1000,1000,1000,1500,1500,1500,3000,3000,3000,3000};
int booked[MAX]  = {0}, days[MAX] = {0};
char guest[MAX][30], contact[MAX][15];
int main() {
    int choice, r, i, d;
    float rev;
    while (1) {
        printf("\n1.Available 2.Book 3.Checkout 4.All Rooms 5.Summary 6.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 6) { printf("Bye!\n"); break; }

        if (choice == 1) {
            for (i = 0; i < MAX; i++)
                if (!booked[i]) printf("Room:%d  Type:%-8s  Rs%.0f/day\n", roomNo[i], type[i], price[i]);
        }
        else if (choice == 2) {
            printf("Room no: "); scanf("%d", &r);
            for (i = 0; i < MAX; i++) if (roomNo[i] == r) {
                if (booked[i]) { printf("Already booked!\n"); break; }
                printf("Guest: "); scanf(" %[^\n]", guest[i]);
                printf("Contact: "); scanf(" %[^\n]", contact[i]);
                printf("Days: "); scanf("%d", &days[i]);
                booked[i] = 1;
                printf("Booked! Total: Rs %.0f\n", days[i] * price[i]);
                break;
            }
        }
        else if (choice == 3) {
            printf("Room no: "); scanf("%d", &r);
            for (i = 0; i < MAX; i++) if (roomNo[i] == r && booked[i]) {
                printf("Guest:%s  Room:%d  Days:%d  Total:Rs%.0f\n",
                       guest[i], r, days[i], days[i]*price[i]);
                booked[i] = 0; days[i] = 0;
                strcpy(guest[i], ""); strcpy(contact[i], "");
                break;
            }
        }
        else if (choice == 4) {
            printf("%-6s %-10s %-10s %-20s %s\n","Room","Type","Price","Guest","Status");
            printf("----------------------------------------------------------\n");
            for (i = 0; i < MAX; i++)
                printf("%-6d %-10s %-10.0f %-20s %s\n", roomNo[i], type[i], price[i],
                       booked[i] ? guest[i] : "-", booked[i] ? "BOOKED" : "FREE");
        }
        else if (choice == 5) {
            int b = 0; rev = 0;
            for (i = 0; i < MAX; i++) if (booked[i]) { b++; rev += days[i]*price[i]; }
            printf("Total:%d  Booked:%d  Free:%d  Revenue:Rs%.0f\n", MAX, b, MAX-b, rev);
        }
        else printf("Invalid!\n");
    }
    return 0;
}