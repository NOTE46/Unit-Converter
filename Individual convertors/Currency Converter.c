
#include <stdio.h>

void dollar();
void rupee();

int main()
{
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
            scanf("%d", &choice);

            if (choice == 1)
            {
                cs = 1;
                break;
            }
            else if (choice == 2)
            {
                printf("Conversion complete. Thank you for using the currency converter.");
                cs = 0;
                break;
            }
            else
            {
                printf("Invalid choice! Please enter 1 or 2.\n");
            }

        } while (choice != 1 && choice != 2);
    }
    return 0;
}

void dollar()
{
    int amount;
    printf("Enter amount in rupee: ");
    scanf("%d", &amount);
    float dolar = amount / 84.0;

    printf("Rupee %d is %g Dollar", amount, dolar);
}

void rupee()
{
    int amount;
    printf("Enter amount in Dollar: ");
    scanf("%d", &amount);
    float dolar = amount * 84.0;

    printf("Dollar %d is %g Rupee", amount, dolar);
}