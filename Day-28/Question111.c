// Write a program to Create Ticket Booking System.

#include <stdio.h>
struct Ticket {
    int ticketNo;
    char name[50];
    char destination[50];
    float fare;
};
int main() {
    struct Ticket t;
    int c;
    printf("1. Book Ticket\n");
    printf("2. Display Ticket\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Ticket Number: ");
            scanf("%d", &t.ticketNo);

            printf("Enter Passenger Name: ");
            scanf("%s", t.name);

            printf("Enter Destination: ");
            scanf("%s", t.destination);

            printf("Enter Fare: ");
            scanf("%f", &t.fare);

            printf("\nTicket booked successfully.\n");
            break;
        case 2:
            printf("\nTicket Details\n");
            printf("Ticket Number : %d\n", t.ticketNo);
            printf("Passenger Name: %s\n", t.name);
            printf("Destination   : %s\n", t.destination);
            printf("Fare          : %.2f\n", t.fare);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}