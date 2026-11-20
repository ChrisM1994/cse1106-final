
#include <stdio.h>

int main(void)
{
    float temperature;
    float minTemp = 68.0;
    float maxTemp = 76.0;

    printf("Smart Classroom Comfort Monitor\n");
    printf("CSE 1106 Final Project\n\n");

    printf("Enter classroom temperature (F): ");

    if (scanf("%f", &temperature) != 1) {
        printf("Invalid temperature input.\n");
        return 1;
    }

    if (temperature >= minTemp && temperature <= maxTemp) {
        printf("Temperature: %.1f F\n", temperature);
        printf("Status: NORMAL\n");
        printf("Warning LED: OFF\n");
    }
    else {
        printf("Temperature: %.1f F\n", temperature);
        printf("Status: WARNING\n");
        printf("Warning LED: ON\n");
    }

    return 0;
}
