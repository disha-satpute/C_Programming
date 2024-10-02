#include <stdio.h>

struct ClimateControl {
    float temperature;
    float humidity;
    int fanStatus;
    float luminosity;

};

// Function to display current settings
void display(struct ClimateControl cc) {
    printf("\n--- Current Climate Settings ---\n");
    printf("Temperature: %.1f degree Celsius\n", cc.temperature);
    printf("Humidity: %.1f%%\n", cc.humidity);
    printf("Luminosity: %.1f flux\n", cc.luminosity);
    printf("Fan Status: %s\n", cc.fanStatus ? "On" : "Off");
}

// Function to accept climate settings from the user
void accept(struct ClimateControl *cc) {
    printf("\nEnter temperature (degree Celsius): ");
    scanf("%f", &cc->temperature);
    printf("Enter humidity (%%): ");
    scanf("%f", &cc->humidity);
    printf("Enter luminosity (flux): ");
    scanf("%f", &cc->luminosity);
    printf("Enter fan status (0 for Off, 1 for On): ");
    scanf("%d", &cc->fanStatus);
}

// Function to set temperature
void setTemperature(struct ClimateControl *cc) {
    printf("\nEnter new temperature (degree Celsius): ");
    scanf("%f", &cc->temperature);
    printf("Temperature set to %.1f degree Celsius\n", cc->temperature);
}

// Function to turn fan on
void turnFanOn(struct ClimateControl *cc) {
    cc->fanStatus = 1;
    printf("Fan has been turned ON.\n");
}

// Function to turn fan off
void turnFanOff(struct ClimateControl *cc) {
    cc->fanStatus = 0;
    printf("Fan has been turned OFF.\n");
}

int main() {
    printf("\n ************* Welcome to Greenhouse Smart System *****************\n");

    // Initial climate settings
    struct ClimateControl greenhouseClimate = {22.5, 45.0, 1, 5000.0};
    display(greenhouseClimate);

    int choice = 1;

    do {
        printf("\nSmart Greenhouse Automation Climate Control Menu:\n");
        printf("1. Set Climate Control Settings\n");
        printf("2. Set Temperature\n");
        printf("3. Turn Fan On\n");
        printf("4. Turn Fan Off\n");
        printf("5. Display Current Settings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                accept(&greenhouseClimate);
                break;
            case 2:
                setTemperature(&greenhouseClimate);
                break;
            case 3:
                turnFanOn(&greenhouseClimate);
                break;
            case 4:
                turnFanOff(&greenhouseClimate);
                break;
            case 5:
                display(greenhouseClimate);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}


/*

g++ -Iinclude -c ./src/sample.c -o ./build/sample.o
g++ ./build/sample.o -o ./build/output.exe

*/