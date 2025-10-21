#include <stdio.h>

void error();
void inputkey();
void kilometer();
void meter();
void centimeter();
void miles ();
void Inches ();
void Feet ();

int input,i;

int main() {

int cont =1;
while (cont==1)
{
    inputkey();
    scanf("%d",&input);

    if (input != 1 && input != 2 && input != 3 && input != 4 && input != 5 && input != 6)
    {
        printf ("ERROR enter correct key\n");
        continue;
    }
    else 
    {
        switch (input)
        {
            case 1: 
            kilometer();
            break;
            
            case 2: 
            meter();  
            break;
            
            case 3: 
            centimeter();
            break;
            
            case 4: 
            miles();
            break;
            
            case 5: 
            Inches();
            break;
            
            case 6: 
            { 
            Feet();    
            break;
            }
        }
    }

int choice; 
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
        continue;
    }
}
while (choice !=1 && choice !=2);

}
    return 0;

}

//UTILITY
void error()
{
    printf("\nERROR, Enter right command\n");
    while (getchar() != '\n')
        ;
}
void inputkey()
{
printf ("INPUTS KEYS-\nKilometer-1\nMeter-2\nCentimeter-3\nMiles-4\nInches-5\nFeet-6\nEnter input key:");
}

//MAIN
void kilometer()
{
    int c;
                float k;
                do 
                {
                printf ("Enter kilometer:");
                i=scanf ("%f",&k);
                    if (i != 1)
                    {
                        error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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
}

void meter(){
 int c;
                float m;
                do 
                {
                printf ("Enter Meter:");
                i=scanf ("%f",&m);
                    if (i != 1)
                    {
                        error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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
}

void centimeter(){
int c;
                float cm;
                do 
                {
                printf ("Enter Centimeter:");
                i=scanf ("%f",&cm);
                    if (i != 1)
                    {
                       error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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

}

void miles ()
{
int c;
                float miles;
                do 
                {
                printf ("Enter miles:");
                i=scanf ("%f",&miles);
                    if (i != 1)
                    {
                        error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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
}

void Inches ()
{
int c;
                float in;
                do 
                {
                printf ("Enter Inches:");
                i=scanf ("%f",&in);
                    if (i != 1)
                    {
                       error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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
}

void Feet ()
{
    int c;
                float ft;
                do 
                {
                printf ("Enter Feet:");
                i=scanf ("%f",&ft);
                    if (i != 1)
                    {
                       error();
                    }
                } while (i != 1);
                 
                do {
                inputkey();
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
}
