
#include <stdio.h>

int main()
{
    int o;
    char t;
    printf("Operation and there keys:\nTemperature Converter:1\nCurrency Converter:2\nLength/Distance Converter:3\nWeight Converter:4\nTime Converter:5\nENTER OPERATION TO CONVERT:");
    scanf("%d", &o);

    if (o != 1 && o != 2 && o != 3 && o != 4 && o != 5)
    {
        printf("Error please enter correct key");
        return 1;
    }
    else
    {
        switch (o)
        {
        case 1:
        {
            // temp converter
            do
            {
                printf("Temperature Converter:\n");
                printf("Convert between Celsius, Fahrenheit, and Kelvin.\n");
                printf("Use C for Ceilsus, F for Fahrenheit, K for Kelvin.\n");
                printf("User input:");
                scanf(" %c", &t);

                if (t != 'C' && t != 'F' && t != 'K')
                {
                    printf("Error please enter correct key");
                }
            } while (t != 'C' && t != 'F' && t != 'K');

            printf("You selected: %c\n", t);

            switch (t)
            {
            case 'C':
            {
                int tem;
                do
                {
                    printf("Select input\nFahrenheit-1\nKelvin-2\nInput:");
                    scanf(" %d", &tem);

                    if (tem != 1 && tem != 2)
                    {
                        printf("Error please enter correct key");
                    }

                } while (tem != 1 && tem != 2);

                switch (tem)
                {
                case 1:
                {
                    float Fahrenheit;
                    printf("Enter Fahrenheit:");
                    scanf("%f", &Fahrenheit);

                    float c = (5.0 / 9.0) * (Fahrenheit - 32.0);

                    printf("%g Fahrenheit = %g Celsius", Fahrenheit, c);
                    break;
                }
                case 2:
                {
                    float kelvin;
                    printf("Enter Kelvin:");
                    scanf("%f", &kelvin);

                    float k = kelvin - 273.15;

                    printf("%g Kelvin = %g Celsius", kelvin, k);
                    break;
                }
                                }
                break;
            }
            case 'F':
            {
                int tem;
                do
                {
                    printf("Select input\nCelsius-1\nKelvin-2");
                    scanf(" %d", &tem);

                    if (tem != 1 && tem != 2)
                    {
                        printf("Error please enter correct key");
                    }

                } while (tem != 1 && tem != 2);

                switch (tem)
                {
                case 1:
                {
                    float Cel;
                    printf("Enter Celsius:");
                    scanf("%f", &Cel);

                    float f = (Cel * 9.0 / 5.0) + 32.0;

                    printf("%g Celsius = %g Fahrenheit", Cel, f);

                    break;
                }

                case 2:
                {
                    float Kelvin;
                    printf("Enter Kelvin:");
                    scanf("%f", &Kelvin);

                    float C = Kelvin - 273.15;

                    float fi = (C * 9.0 / 5.0) + 32.0;

                    printf("%g Kelvin = %g Fahrenheit", Kelvin, fi);

                    break;
                }
                }
                break;
            }
            case 'K':
            {
                int tem;
                do
                {
                    printf("Select input\nCelsius-1\nFahrenheit-2");
                    scanf(" %d", &tem);

                    if (tem != 1 && tem != 2)
                    {
                        printf("Error please enter correct key");
                    }

                } while (tem != 1 && tem != 2);

                switch (tem)
                {
                case 1:
                {
                    float Cel;
                    printf("Enter Celsius:");
                    scanf("%f", &Cel);

                    float k = Cel + 273.15;

                    printf("%g Celsius = %g Kelvin", Cel, k);

                    break;
                }

                case 2:
                {
                    float Fahrenheit;
                    printf("Enter Fahrenheit:");
                    scanf("%f", &Fahrenheit);

                    float k = ((Fahrenheit-32.0)*5.0)/9.0+273.15;

                    printf("%g Fahrenheit = %g Kelvin", Fahrenheit, k);

                    break;
                }
                }
                break;
            }
            }
            break;
        }
        }
    }

    return 0;
}