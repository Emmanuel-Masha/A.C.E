//calculating simple interest
#include <stdio.h>

int main() {
    int principal, rate, time;
    int simple_interest;

    printf("Enter principal amount: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%d", &rate);

    printf("Enter time (in years,): ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("Simple Interest = %d\n", simple_interest);

    return 0;
}