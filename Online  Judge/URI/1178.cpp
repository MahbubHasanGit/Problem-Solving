#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N[100],y;
    cin >> y;
    for(int i=0; i<100; i++){
        N[i] = y;
        y = y/2;
    }
    for(int j=0; j<100; j++){
        printf("N[%d] = %.4lf\n",j,N[j]);
    }
}
