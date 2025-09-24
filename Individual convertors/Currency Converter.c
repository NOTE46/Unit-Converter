
#include <stdio.h>

int main()
{
    char cu;

    printf("Dollar-D\nRupee-R\nEnter currency you want to convert:");
    scanf(" %c", &cu);

    if (cu != 'D' && cu != 'R' && cu != 'd' && cu != 'r')
    {
        printf("ERROR enter correct key\n");
        return 1;
    }

    else
    {

        switch (cu)
        {
        case 'D':
        case 'd':
        {
            int amount;
            printf("Enter amount in rupee:");
            scanf("%d",&amount);
            float dolar = amount/84.0;

            printf ("Rupee %d is %g Dollar",amount,dolar);

            break;
        }

        case 'R':
        case 'r':
        {
            int amount;
            printf("Enter amount in Dollar:");
            scanf("%d",&amount);
            float dolar = amount*84.0;

            printf ("Dollar %d is %g Rupee",amount,dolar);
            break;
        }
        }
    }

    return 0;
}