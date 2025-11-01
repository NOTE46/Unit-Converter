
#include <stdio.h>

void error();
void Celsius();
void Fahrenheit();
void Kelvin();

int main()
{
    char t;

    do
    {
        printf("Temperature Converter:\n");
        printf("Convert between Celsius, Fahrenheit, and Kelvin.\n");
        printf("Use C for Celsius, F for Fahrenheit, K for Kelvin.\n");
        printf("User input:");
        scanf(" %c", &t);

        if (t != 'C' && t != 'F' && t != 'K' && t != 'c' && t != 'f' && t != 'k')
        {
            error();
        }
    }
        while (t != 'C' && t != 'F' && t != 'K' && t != 'c' && t != 'f' && t != 'k')
            ;

        printf("You selected: %c\n", t);

        switch (t)
        {
        case 'C':
        case 'c':
        {
            Celsius();
             break;
        }
        case 'F':
        case 'f':
        {
           Fahrenheit();
           break;
        }
        case 'K':
        case 'k':
        {
            Kelvin();
            break;
        }
        }

        return 0;
    }

void error()
    {
        printf("\nERROR, Enter right command\n");
        while (getchar() != '\n')
            ;
    }

void Celsius()
{
    int tem;
            do
            {
                printf("Select input\nFahrenheit-1\nKelvin-2\nInput:");
                scanf(" %d", &tem);

                if (tem != 1 && tem != 2)
                {
                    error();
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
}

void Fahrenheit()
{
 int tem;
            do
            {
                printf("Select input\nCelsius-1\nKelvin-2\nInput:");
                scanf(" %d", &tem);

                if (tem != 1 && tem != 2)
                {
                    error();
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
           }

void Kelvin()
{
 int tem;
            do
            {
                printf("Select input\nCelsius-1\nFahrenheit-2\nInput:");
                scanf(" %d", &tem);

                if (tem != 1 && tem != 2)
                {
                    error();
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

                float k = ((Fahrenheit - 32.0) * 5.0) / 9.0 + 273.15;

                printf("%g Fahrenheit = %g Kelvin", Fahrenheit, k);

                break;
            }
            }
}