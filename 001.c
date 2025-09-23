
#include <stdio.h>

void tempconvertor();
void currconvertor();
void lenconvertor();

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
            tempconvertor();
            break;
        }

        case 2:
        {
            currconvertor();
            break;
        }
        case 3:
        {
            lenconvertor();
            break;
        }
        }
    }

    return 0;
}

void tempconvertor()
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
            printf("Error please enter correct key\n");
        }
    } while (t != 'C' && t != 'F' && t != 'K' && t != 'c' && t != 'f' && t != 'k');

    printf("You selected: %c\n", t);

    switch (t)
    {
    case 'C':
    case 'c':
    {
        int tem;
        do
        {
            printf("Select input\nFahrenheit-1\nKelvin-2\nInput:");
            scanf(" %d", &tem);

            if (tem != 1 && tem != 2)
            {
                printf("Error please enter correct key\n");
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
    case 'f':
    {
        int tem;
        do
        {
            printf("Select input\nCelsius-1\nKelvin-2\nInput:");
            scanf(" %d", &tem);

            if (tem != 1 && tem != 2)
            {
                printf("Error please enter correct key\n");
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
    case 'k':
    {
        int tem;
        do
        {
            printf("Select input\nCelsius-1\nFahrenheit-2\nInput:");
            scanf(" %d", &tem);

            if (tem != 1 && tem != 2)
            {
                printf("Error please enter correct key\n");
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
        break;
    }
    }

}

void currconvertor()
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

}

void lenconvertor()
{
int cont =1;
while (cont==1)
{
int input,i;

    printf ("INPUTS KEYS-\nKilometer-1\nMeter-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter input key:");
    scanf("%d",&input);

    if (input != 1 && input != 2 && input != 3 && input != 4 && input != 5 && input != 6)
    {
        printf ("ERROR enter correct key\n");
        return 1;
    }
    else 
    {
        switch (input)
        {
            case 1: 
            { 
                int c;
                float k;
                do 
                {
                printf ("Enter kilometer:");
                i=scanf ("%f",&k);
                    if (i != 1)
                    {
                        printf ("Error enter correct kilometer\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nMeter-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float m=k*1000;

                    printf ("%.2f kilometer is %.2f meter\n",k,m);
                    
                    break;
                    }
                    case 3:
                    {
                        float cen=k*100000;

                        printf ("%.2f kilometer is %.2f centimeter\n",k,cen);
                        break;
                    }
                    case 4:
                    {
                        float mi = k*0.621371;

                        printf("%.2f kilometer is %.2f miles\n",k,mi);
                        break;
                    }
                    case 5:
                    {
                        float in = k*39370.1;

                        printf("%.2f kilometer is %.2f inches\n",k,in);
                        break;
                    }
                    case 6:
                    {
                        float ft=k*3280.84;

                        printf("%.2f kilometer is %.2f feet\n",k,ft);
                        break;
                    }
                    
                }

                break;
            }
            case 2: 
            { 
                int c;
                float m;
                do 
                {
                printf ("Enter Meter:");
                i=scanf ("%f",&m);
                    if (i != 1)
                    {
                        printf ("Error enter correct Meter\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nKilometer-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float km = m/1000;

                    printf ("%.2f meter is %.2f kilometer\n",m,km);
                    
                    break;
                    }
                    case 3:
                    {
                        float cm=m*100;

                        printf ("%.2f meter is %.2f centimeter\n",m,cm);
                        break;
                    }
                    case 4:
                    {
                        float miles = m*0.000621371;

                        printf("%.2f meter is %.2f miles\n",m,miles);
                        break;
                    }
                    case 5:
                    {
                        float inches=m*39.3701;

                        printf("%.2f meter is %.2f inches\n",m,inches);
                        break;
                    }
                    case 6:
                    {
                        float feet=m*3.28084;

                        printf("%.2f meter is %.2f feet\n",m,feet);
                        break;
                    }
                    
                }

                break;
            }
            case 3: 
            { 
                int c;
                float cm;
                do 
                {
                printf ("Enter Centimeter:");
                i=scanf ("%f",&cm);
                    if (i != 1)
                    {
                        printf ("Error enter correct Centimeter\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nKilometer-2\nmeter-3\nMiles-4\nInches-5\nFeet-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float km=cm/100000;

                    printf ("%.2f Centimeter is %.2f kilometer\n",cm,km);
                    
                    break;
                    }
                    case 3:
                    {
                        float m=cm/100;

                        printf ("%.2f Centimeter is %.2f meter\n",cm,m);
                        break;
                    }
                    case 4:
                    {
                        float miles=cm*0.0000062137;

                        printf("%.2f Centimeter is %.2f miles\n",cm,miles);
                        break;
                    }
                    case 5:
                    {
                        float inches=cm*0.393701;

                        printf("%.2f Centimeter is %.2f inches\n",cm,inches);
                        break;
                    }
                    case 6:
                    {
                        float ft=cm*0.0328084;

                        printf("%.2f Centimeter is %.2f feet\n",cm,ft);
                        break;
                    }
                    
                }

                break;
            }
            case 4: 
            { 
                int c;
                float miles;
                do 
                {
                printf ("Enter miles:");
                i=scanf ("%f",&miles);
                    if (i != 1)
                    {
                        printf ("Error enter correct miles\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nKilometer-2\nmeter-3\nCentimeter-4\nInches-5\nFeet-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float km=miles*1.60934;

                    printf ("%.2f miles is %.2f kilometer\n",miles,km);
                    
                    break;
                    }
                    case 3:
                    {
                        float m=miles*1609.34;

                        printf ("%.2f miles is %.2f meter\n",miles,m);
                        break;
                    }
                    case 4:
                    {
                        float cm=miles*160934;

                        printf("%.2f miles is %.2f centimeter\n",miles,cm);
                        break;
                    }
                    case 5:
                    {
                        float in=miles*63360;

                        printf("%.2f miles is %.2f inches\n",miles,in);
                        break;
                    }
                    case 6:
                    {
                        float ft=miles*5280;

                        printf("%.2f miles is %.2f feet\n",miles,ft);
                        break;
                    }
                    
                }

                break;
            }
            case 5: 
            { 
                int c;
                float in;
                do 
                {
                printf ("Enter Inches:");
                i=scanf ("%f",&in);
                    if (i != 1)
                    {
                        printf ("Error enter correct Inches\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nKilometer-2\nmeter-3\nMiles-4\nCentimeter-5\nFeet-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float km=in*0.0000254;

                    printf ("%.2f Inches is %.2f kilometer\n",in,km);
                    
                    break;
                    }
                    case 3:
                    {
                        float m=in*0.0254;

                        printf ("%.2f Inches is %.2f meter\n",in,m);
                        break;
                    }
                    case 4:
                    {
                        float miles=in/63360;

                        printf("%.2f Inches is %.2f miles\n",in,miles);
                        break;
                    }
                    case 5:
                    {
                        float cm=in*2.54;

                        printf("%.2f Inches is %.2f centimeter\n",in,cm);
                        break;
                    }
                    case 6:
                    {
                        float ft=in/12;

                        printf("%.2f Inches is %.2f feet\n",in,ft);
                        break;
                    }
                    
                }

                break;
            }
            case 6: 
            { 
                int c;
                float ft;
                do 
                {
                printf ("Enter Feet:");
                i=scanf ("%f",&ft);
                    if (i != 1)
                    {
                        printf ("Error enter correct Feet\n");
                        while(getchar() != '\n');
                    }
                } while (i != 1);
                 
                do {
                printf("Convert to:\nKilometer-2\nmeter-3\nMiles-4\nCentimeter-5\nInches-6\nEnter output key:");
                scanf("%d",&c);
                
                if (c != 2 && c != 3 && c != 4 && c != 5 && c != 6)
                {
                    printf ("Error enter correct key\n");
                }
                }while (c != 2 && c != 3 && c != 4 && c != 5 && c != 6);

                switch (c)
                {
                    case 2:
                    {
                    float km=ft*0.0003048;

                    printf ("%.2f Feet is %.2f kilometer\n",ft,km);
                    
                    break;
                    }
                    case 3:
                    {
                        float m=ft*0.3048;

                        printf ("%.2f Feet is %.2f meter\n",ft,m);
                        break;
                    }
                    case 4:
                    {
                        float miles=ft/5280;

                        printf("%.2f Feet is %.2f miles\n",ft,miles);
                        break;
                    }
                    case 5:
                    {
                        float cm=ft*30.48;

                        printf("%.2f Feet is %.2f centimeter\n",ft,cm);
                        break;
                    }
                    case 6:
                    {
                        float inches=ft*12;

                        printf("%.2f Feet is %.2f inches\n",ft,inches);
                        break;
                    }
                    
                }

                break;
            }


        }

    }


int choice; 
    {

    do{
    printf("\nWhat would you like to do?\n");
    printf("1. Convert another distance\n");
    printf("2. Exit program\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice==1)
    {
        cont=1;
        break;
    }
    else if (choice==2)
    {
        cont=0;
        break;
    }
    else 
    {
        printf("Invalid choice! Please enter 1 or 2.\n");
        return 1;
    }
}
while (choice !=1 && choice !=2);
}
} 
}