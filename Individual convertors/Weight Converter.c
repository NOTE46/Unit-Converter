#include <stdio.h>

void kgpound();
void gramounc();

int main()
{
    int a;

    printf("1- kg ↔ pounds\n2- Grams ↔ ounces\nEnter command:");
    scanf("%d", &a);
    if (a != 1 && a != 2)
    {
        printf("Error Enter correct key");
        return 1;
    }
    else
    {
        switch (a)
        {
        case 1:
        {
            kgpound();
            break;
        }
        case 2:
        {
            gramounc();
            break;
        }

        break;
        }
    }

    return 0;
}

void kgpound()
{
float kg;
int i;
            do
            {

                printf("Enter Kg:");
                i = scanf("%f", &kg);

                if (i != 1)
                {
                    printf("Enter correct input\n");
                    while (getchar() != '\n');
                }
            } while (i != 1);

            float pounds = kg * 2.20462;
            printf("%.2f Kg is %.2f Pounds", kg, pounds);
            
}
void gramounc()
{
    float grams;
    int i;
            do
            {

                printf("Enter Grams:");
                i = scanf("%f", &grams);

                if (i != 1)
                {
                    printf("Enter correct input\n");
                    while (getchar() != '\n');
                }
            } while (i != 1);

            float ounces = grams * 0.035274;
            printf("%.2f Grams is %.2f Ounces", grams, ounces);
            
}

