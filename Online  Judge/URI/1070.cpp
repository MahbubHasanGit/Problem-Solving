#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0){
        n = n+1;
        for(int i=0; i<=10; i=i+2){
            cout << n+i <<endl;
        }

    }
    else{
        for(int j=0; j<=10; j=j+2){
        cout << n+j <<endl;
    }
}
}
