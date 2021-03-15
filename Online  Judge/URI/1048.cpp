#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;

    if(n>=0 && n<=400.00)
    {
        printf("Novo salario: %.2lf\n",n+((n*15)/100));
        printf("Reajuste ganho: %.2lf\n",(n*15)/100);
        cout<<"Em percentual: 15 %" <<endl;
    }
    else if(n>=400.01 && n<=800.00)
    {
        printf("Novo salario: %.2lf\n",n+((n*12)/100));
        printf("Reajuste ganho: %.2lf\n",(n*12)/100);
        cout<<"Em percentual: 12 %" <<endl;
    }
    else if(n>=800.01 && n<=1200.00)
    {
        printf("Novo salario: %.2lf\n",n+((n*10)/100));
        printf("Reajuste ganho: %.2lf\n",(n*10)/100);
        cout<<"Em percentual: 10 %" <<endl;
    }
    else if(n>=1200.01 && n<=2000.00)
    {
        printf("Novo salario: %.2lf\n",n+((n*7)/100));
        printf("Reajuste ganho: %.2lf\n",(n*7)/100);
        cout<<"Em percentual: 7 %" <<endl;
    }
    else if(n>2000.00)
    {
        printf("Novo salario: %.2lf\n",n+((n*4)/100));
        printf("Reajuste ganho: %.2lf\n",(n*4)/100);
        cout<<"Em percentual: 4 %" <<endl;
    }
}
