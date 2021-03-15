#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5], e=0, o=0, p=0, n=0;
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int j=0; j<5; j++){
            if( abs(a[j])%2==0){
                e=e+1;
            }
            else{
                o = o+1;
            }
            if(a[j]>0){
                p = p+1;
            }
            else if(a[j]<0){
                n = n+1;
            }
    }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;
}
