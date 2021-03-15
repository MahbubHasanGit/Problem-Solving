#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n>m){
        cout << "O JOGO DUROU " << 24-(n-m) << " HORA(S)" <<endl;
    }
    if(n==m){
            cout << "O JOGO DUROU " << 24 << " HORA(S)" <<endl;
    }
    if(n<m){
        cout << "O JOGO DUROU " << m-n << " HORA(S)" <<endl;
    }
}
