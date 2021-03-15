#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t, n,n1=0, n2=1,n3, m;
   cin >> t;
   for(int i=0; i<t; i++){
        cin >> n;
        for(int j=2; j<n; j++){
        n3 = n1+n2;
        n1= n2;
        n2= n3;
        }
        m = n1+n2;
        if(n==0){
            cout <<"Fib(" << n << ") = " << n <<endl;
        }
        else{
            cout <<"Fib(" << n << ") = " << m <<endl;
        }
        cout <<endl;
        n1=0;
        n2=1;
   }
}



