#include <stdio.h>

void secmin();
void minhr();
void error();

int main()
{

    int a;

    do
    {
        printf("1-Seconds ↔ Minutes\n2-Minutes ↔ Hours\nEnter command:");
        scanf("%d", &a);

        if (a != 1 && a != 2)
            
        {
            error();
        }
    } while (a != 1 && a != 2);

    switch (a)
    {
    case 1:
        secmin();
        break;

    case 2:
        minhr();
        break;
    }

    return 0;
}

void error()
{
    printf("Enter right command\n");
    while (getchar() != '\n')
        ;
}

void secmin()
{
    int in;
    do
    {
        printf("1-Seconds\n2-Minutes\nEnter user input:");
        scanf("%d", &in);
        if (in != 1 && in != 2)
        {
            error();
        }
    } while (in != 1 && in != 2);

    switch (in)
    {
    case 1:
    {
        float sec;
        int v;
        do
        {
            printf("Enter Seconds:");
            v = scanf("%f", &sec);
            if (v != 1)
            {
                error();
            }
        } while (v != 1);

        float min = sec / 60;
        printf("%.2f Seconds is %.2f Minutes",sec, min);

        // further conversion
        char c;
        do
        {
            printf("\nDo you want to convert seconds to hours?\nY-Yes  N-No\nEnter command:");
            scanf(" %c", &c);

            if (c != 'Y' && c != 'N' && c != 'y' && c != 'n')
            {
                error();
            }
        } while (c != 'Y' && c != 'N' && c != 'y' && c != 'n');

        switch (c)
        {
        case 'Y':
        case 'y':
        {
            float hr = sec/ 3600;
            printf("%.2f Seconds is %.2f Hours", sec, hr);
            break;
        }

        case 'N':
        case 'n':
        {
            printf("Okay");
            break;
        }
           
        break;
        }

        break;
    }
    case 2:
    {
        float min;
        int v;
        do
        {
            printf("Enter Minutes:");
            v = scanf("%f", &min);
            if (v != 1)
            {
                error();
            }
        } while (v != 1);

        float sec =min*60;
        printf("%.2f Minutes is %.2f Seconds",min, sec);

        // further conversion
        char c;
        do
        {
            printf("\nDo you want to convert minutes to hours?\nY-Yes  N-No\nEnter command:");
            scanf(" %c", &c);

            if (c != 'Y' && c != 'N' && c != 'y' && c != 'n')
            {
                error();
            }
        } while (c != 'Y' && c != 'N' && c != 'y' && c != 'n');

        switch (c)
        {
        case 'Y':
        case 'y':
        {
            float hr = min/60;
            printf("%.2f Minutes is %.2f Hours", min, hr);
            break;
        }

        case 'N':
        case 'n':
        {
            printf("Okay");
            break;
        }
            

        break;
        }

        break;
    }

        break;
    }
}

void minhr()
{
    int in;
    do
    {
        printf("1-Minutes\n2-Hour\nEnter user input:");
        scanf("%d", &in);
        if (in != 1 && in != 2)
        {
            error();
        }
    } while (in != 1 && in != 2);

    switch (in)
    {
    case 1:
    {
        float min;
        int v;
        do
        {
            printf("Enter Minutes:");
            v = scanf("%f", &min);
            if (v != 1)
            {
                error();
            }
        } while (v != 1);

        float hr = min / 60;
        printf("%.2f Minutes is %.2f Hour",min, hr);

        // further conversion
        char c;
        do
        {
            printf("\nDo you want to convert Minutes to Seconds?\nY-Yes  N-No\nEnter command:");
            scanf(" %c", &c);

            if (c != 'Y' && c != 'N' && c != 'y' && c != 'n')
            {
                error();
            }
        } while (c != 'Y' && c != 'N' && c != 'y' && c != 'n');

        switch (c)
        {
        case 'Y':
        case 'y':
        {
            float sec = min*60;
            printf("%.2f Minutes is %.2f Seconds", min, sec);
            break;
        }

        case 'N':
        case 'n':
        {
            printf("Okay");
            break;
        }
           
        break;
        }

        break;
    }
    case 2:
    {
        float hr;
        int v;
        do
        {
            printf("Enter Hours:");
            v = scanf("%f", &hr);
            if (v != 1)
            {
                error();
            }
        } while (v != 1);

        float min = hr*60;
        printf("%.2f Hours is %.2f Minutes",hr, min);

        // further conversion
        char c;
        do
        {
            printf("\nDo you want to convert Hours to Seconds?\nY-Yes  N-No\nEnter command:");
            scanf(" %c", &c);

            if (c != 'Y' && c != 'N' && c != 'y' && c != 'n')
            {
                error();
            }
        } while (c != 'Y' && c != 'N' && c != 'y' && c != 'n');

        switch (c)
        {
        case 'Y':
        case 'y':
        {
            float sec = hr*3600;
            printf("%.2f Hours is %.2f Seconds", hr, sec);
            break;
        }

        case 'N':
        case 'n':
        {
            printf("Okay");
            break;
        }
            

        break;
        }

        break;
    }

        break;
    }
}