
#include <stdio.h>

int main(void)
{
    float temperature;
    float minTemp = 68.0;
    float maxTemp = 76.0;
    float total = 0.0;
    int count = 0;
    int choice;

    FILE *file;

    printf("Smart Classroom Comfort Monitor\n");
    printf("CSE 1106 Final Project\n");

    do {
        printf("\n1. Enter temperature\n");
        printf("2. View average\n");
        printf("3. Change acceptable range\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid menu selection.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter temperature (F): ");

                if (scanf("%f", &temperature) != 1) {
                    printf("Invalid temperature.\n");
                    return 1;
                }

                total += temperature;
                count++;

                file = fopen("data/temperature_log.csv", "a");

                if (temperature >= minTemp &&
                    temperature <= maxTemp) {

                    printf("Status: NORMAL\n");
                    printf("Warning LED: OFF\n");

                    if (file != NULL) {
                        fprintf(file, "%.1f,NORMAL\n",
                                temperature);
                    }
                }
                else {
                    printf("Status: WARNING\n");
                    printf("Warning LED: ON\n");

                    if (file != NULL) {
                        fprintf(file, "%.1f,WARNING\n",
                                temperature);
                    }
                }

                if (file != NULL) {
                    fclose(file);
                }
                else {
                    printf("Warning: Could not save reading.\n");
                }

                break;

            case 2:
                if (count > 0) {
                    printf("Average: %.2f F\n",
                           total / count);
                }
                else {
                    printf("No readings recorded yet.\n");
                }
                break;

            case 3:
                printf("Enter new minimum: ");
                if (scanf("%f", &minTemp) != 1) {
                    return 1;
                }

                printf("Enter new maximum: ");
                if (scanf("%f", &maxTemp) != 1) {
                    return 1;
                }

                printf("Range updated.\n");
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid selection.\n");
        }

    } while (choice != 4);

    return 0;
}
