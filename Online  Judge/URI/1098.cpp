#include<bits/stdc++.h>
using namespace  std;
int main()
{
    double n=0, b=1, q=3;
    for(double i=0; i<=2.00; i=i+0.2){
        for(double j=b; j<=q; j=j+1){
            cout<< "I="<< i << " J=" << j <<endl;
        }
        b = b+ 0.2;
        q = q+ 0.2;
    }
}
