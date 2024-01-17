#include <stdio.h>

int main() {
    float degreesF;
    float degreesC;

    printf("Enter a temperature in degrees Celsius: ");
    scanf("%f", & degreesC); 

    degreesF = (degreesC * 1.8) + 32;  

    printf("%f degrees Celsius is %f degrees Fahrenheit.\n", degreesC, degreesF);

    if (degreesF > 100) {
        printf("Warning: Heat Wave!\n");
    }
    else if (degreesF >= 80 && degreesF <= 90) 
    {
        printf("Hot\n");
    }
    else if(degreesF >= 41 && degreesF <= 79)
    {
        printf("Normal\n");
    }
    else if(degreesF >= 10 && degreesF <= 40)
    {
        printf("Cold\n");  
    }

    return 0;
}
