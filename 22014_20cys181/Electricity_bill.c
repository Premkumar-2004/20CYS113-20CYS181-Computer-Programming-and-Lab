#include <stdio.h>

int main() {
    int i, units;
    float bill;
    char name[100], ebNumber[100];

    for (i = 1; i <= 5; i++) {
        printf("House %d\n", i);
        printf("Name of the consumer: ");
        scanf("%s", name);
        printf("EB number: ");
        scanf("%s", ebNumber);
        printf("Units consumed: ");
        scanf("%d", &units);

       
        if (units <= 100) {
            bill = 0;
        } else if (units <= 400) {
            bill = (units - 100) * 2.25;
        } else if (units <= 500) {
            bill = (300 * 2.25) + ((units - 400) * 4.50);
        } else if (units <= 600) {
            bill = (300 * 2.25) + (100 * 4.50) + ((units - 500) * 6.00);
        } else {
            bill = (300 * 2.25) + (100 * 4.50) + (100 * 6.00) + ((units - 600) * 8.00);
        }

        printf("Electricity bill for consumer %s (EB number: %s): %.2f INR\n", name, ebNumber, bill);
        printf("\n");
    }

    return 0;
}
