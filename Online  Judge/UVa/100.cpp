#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c=0;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin>> a >> b ;
        while(a!=b){
            if(b%2!=0){
                b = 3*b+1;
            }
            else{
                b = b/2;
            }
            c++;
        }
        cout << c <<endl;
    }
}

