#include <stdio.h>

#define price_per_ltr 1.5

int main(void)
{
    int entry_id;
    double start_km, end_km, liters;
    double distance, mileage, cost;

    printf("========================================\n");
    printf("       VEHICLE FUEL & MILEAGE LOG       \n");
    printf("========================================\n");
    printf("Hi there! Let's log your latest fill-up.\n");
    printf("It only takes a few seconds.\n\n");

    printf("First, give this entry a number (like 1): ");
    scanf("%d", &entry_id);

    printf(" Enter starting Odometer(km): ");
    scanf("%lf", &start_km);

    printf(" Enter ending Odometer (km): ");
    scanf("%lf", &end_km);

    printf(" Enter fuel used (liters) : ");
    scanf("%lf", &liters);

    distance = end_km - start_km;
    mileage  = distance / liters;
    cost     = liters * price_per_ltr;

    printf("\nNice, here's how that trip went:\n");
    printf("----------------------------------------\n");
    printf("%-5s%9s%9s%9s%8s\n", "ID", "KM", "LITERS", "KM/L", "COST");
    printf("%-5d%9.1f%9.2f%9.2f%8.2f\n", entry_id, distance, liters, mileage, cost);
    printf("----------------------------------------\n");

    printf("You drove %.2f km on %.2f liters of fuel.\n", distance, liters);
    printf("That works out to %.2f km for every liter.\n", mileage);
    printf("The fuel cost you %.2f in total.\n", cost);
    printf("\nThanks for logging it. Happy driving!\n");

    return 0;
}