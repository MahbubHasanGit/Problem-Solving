//Love Pattern
#include<stdio.h>
int main()
{
    int i,j,n ;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=n/2; i<=n; i=i+2) //upper part
    {
        for(j=1; j<=n-i; j=j+2) //space left side
            printf(" ");

        for(j=1; j<=i; j++)
            printf("*");

        for(j=1; j<=n-i; j++) //space right side
            printf(" ");
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");//end upper part

    }

    for(i=n; i>=1; i--) //lower part
    {
        for(j=1; j<=n-i; j++) //lower part scace
            printf(" ");
        for(j=1; j<=2*i-1; j++)
            printf("*");
        printf("\n");//end lower part

    }

    getch();
}
