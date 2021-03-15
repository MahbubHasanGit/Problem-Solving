#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=3, t=1;
    cin >> n;

    while(n>0){
        for( int i=t; i<=c; i++){
            cout << i << " " ;
        }
        cout <<"PUM";
        cout << endl;
        t= t+4;
        c = c+4;

        n--;
    }
}
