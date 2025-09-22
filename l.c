#include <stdio.h>

// Simple function to clear input buffer
void clearBuffer() {
    while (getchar() != '\n');
}

// Simple function to get a valid float input
float getFloat(char* prompt) {
    float value;
    int result;
    do {
        printf("%s", prompt);
        result = scanf("%f", &value);
        if (result != 1) {
            printf("Error: Enter correct value\n");
            clearBuffer();
        }
    } while (result != 1);
    return value;
}

// Simple function to show conversion menu
void showConversionMenu() {
    printf("Convert to:\nKilometer-1\nMeter-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter output key:");
}

// Simple function to convert between any two units
void convert(float value, int from, int to) {
    float result;
    char* units[] = {"", "kilometer", "meter", "centimeter", "miles", "inches", "feet"};
    
    // Convert from input unit to kilometers first
    float km;
    switch(from) {
        case 1: km = value; break;                    // km to km
        case 2: km = value / 1000; break;             // m to km  
        case 3: km = value / 100000; break;           // cm to km
        case 4: km = value / 0.621371; break;         // miles to km
        case 5: km = value / 39370.1; break;          // inches to km
        case 6: km = value / 3280.84; break;          // feet to km
    }
    
    // Convert from kilometers to target unit
    switch(to) {
        case 1: result = km; break;                   // km to km
        case 2: result = km * 1000; break;            // km to m
        case 3: result = km * 100000; break;          // km to cm
        case 4: result = km * 0.621371; break;        // km to miles
        case 5: result = km * 39370.1; break;        // km to inches
        case 6: result = km * 3280.84; break;        // km to feet
    }
    
    printf("%.2f %s is %.2f %s\n", value, units[from], result, units[to]);
}

int main() {
    int input, output;
    float value;
    
    // Get input unit
    printf("INPUTS KEYS-\nKilometer-1\nMeter-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter input key:");
    scanf("%d", &input);
    
    if (input < 1 || input > 6) {
        printf("ERROR enter correct key\n");
        return 1;
    }
    
    // Get value to convert
    char prompt[50];
    char* units[] = {"", "kilometer:", "meter:", "centimeter:", "miles:", "inches:", "feet:"};
    sprintf(prompt, "Enter %s ", units[input]);
    value = getFloat(prompt);
    
    // Get output unit
    do {
        showConversionMenu();
        scanf("%d", &output);
        if (output < 1 || output > 6 || output == input) {
            printf("Error enter correct key\n");
        }
    } while (output < 1 || output > 6 || output == input);
    
    // Do the conversion
    convert(value, input, output);
    
    return 0;
}