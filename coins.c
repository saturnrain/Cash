#include <stdio.h>


int main() {
    int amount;
    int change = 0;

    printf("Enter the amount in cents: ");
    scanf("%d", &amount);
    // ask the user for the amount of change

    change += amount / 25;
    amount %= 25;
    // add the number of quarters

    change += amount / 10;
    amount %= 10;
    // add the number of dimes

    change += amount / 5;
    amount %= 5;
    // add the number of nickels

    change += amount;
    // the remaining amount is in pennies

    printf("Minimum coins needed: %d\n", change);

    return 0;

}
