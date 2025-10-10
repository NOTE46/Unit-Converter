
#include <stdio.h>

void dollar();
void rupee();
void error();
void rate();

double rates;

int main()
{
    rate();

    int cs = 1;
    while (cs == 1)
    {
        char cu;

        printf("Dollar-D\nRupee-R\nEnter currency you want to convert: ");
        scanf(" %c", &cu);

        if (cu != 'D' && cu != 'R' && cu != 'd' && cu != 'r')
        {
            printf("ERROR enter correct key\n");
            continue;
        }
        else
        {
            switch (cu)
            {
            case 'D':
            case 'd':
            {
                dollar();
                break;
            }

            case 'R':
            case 'r':
            {
                rupee();
                break;
            }
            }
        }

        int choice;

        do
        {
            printf("\nWhat would you like to do?\n");
            printf("1. Convert another currency\n");
            printf("2. Exit program\n");
            printf("Enter choice (1 or 2): ");
            int a = scanf("%d", &choice);

            if (a != 1)
            {
               error();
            }
            else
            {

                if (choice == 1)
                {
                    cs = 1;
                    break;
                }
                else if (choice == 2)
                {
                    printf("Conversion complete. Thank you for using the currency converter.");
                    break;
                }
                else
                {
                    printf("Invalid choice! Please enter 1 or 2.\n");
                }
            }
        } while (choice != 1 && choice != 2);
    }
    return 0;
}

void dollar()
{
    double amount;
    int d;
    do
    {
        printf("Enter amount in rupee: ");
         d = scanf("%lf", &amount);

        if (d != 1)
        {
            error();
        }
    } while (d != 1);

        double dolar = amount / rates;

    printf("Rupee %.2lf is %.2lf Dollar\n", amount, dolar);
}

void rupee()
{
    double amount;
    int r;
    do
    {
        printf("Enter amount in Dollar: ");
    r=scanf("%lf", &amount);
     if (r != 1)
        {
            error();
        }
    } while (r != 1);
    
    
    double dolar = amount * rates;

    printf("Dollar %.2lf is %.2lf Rupee\n", amount, dolar);
}

void error()
{
    printf("\nERROR, Enter right command\n");
    while (getchar() != '\n')
        ;
}

void rate()
{
    int r;
    do {

    printf ("Enter current exchange rate in INR: ");
    r =scanf("%lf",&rates);

    if (r!=1)
    {
        error();
    }
}while (r!=1);

printf ("The exchange rate entered is %.2lf INR.\n",rates);
}