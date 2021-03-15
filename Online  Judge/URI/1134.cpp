#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,g=0,d=0;
    while(n!=4){
        cin >> n;
        if(n==1){
            a++;
        }
        if(n==2){
            g++;
        }
        if(n==3){
            d++;
        }
    }
    cout << "MUITO OBRIGADO" <<endl;
    cout << "Alcool: " << a <<endl;
    cout << "Gasolina: " << g <<endl;
    cout << "Diesel: " << d <<endl;
}
