#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum=1,n=2;
    for(float i=3; i<=39; i=i+2){
        sum = sum+(i/n);
        n = n*2;
    }
    printf("%.2lf\n",sum);
}





