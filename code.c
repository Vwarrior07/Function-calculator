#include<stdio.h>
int main()
{
    int choise;
    printf("for finding the factorial press 1.\n");
    printf("for finding the no is prime or not press 2.\n");
    printf("for finding the no is odd or even press 3.\n");
    printf("please enter the choise: ");
    scanf("%i",&choise);
    switch (choise)
    {
    case 1://factorial
    {
    int a,b,c;
    printf("please enter the number: ");
    scanf("%i",&a);
    c=a;
    for (b=1;b<c;b++)
    {
        a=b*a;
    }
    printf("%i",a);
        break;
    }
    case 2://prime no
    {
        int a,b,c=0;
        printf("please enter the no: ");
        scanf("%i",&a);
        for (b=2;b<a;b++)
        {
            if (a%b==0)
            {
                c++;
                break;
            }
        }
        if (c==0)
        {
            printf("it is a prime no.\n");
        }
        else
        printf("it is not a prime no.\n");
        break;
    }
    case 3://even no and odd no
    {
    int b;
    for (b=0;b<=100;b++)
    {
        if(b%2==0)
        {
            printf("%i is even\n",b);
        }
        else
        {
            printf("%i is odd\n",b);
        }
    }
    break;
    }
    default:
    printf("Entered no is wrong.");
        break;
    }
    return 0;
}