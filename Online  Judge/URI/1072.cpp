#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, c=0, o=0;
    cin >> n;
    if(n<10000){
     for(int i=1; i<=n; i++){
        cin >> m;
        if(m>=10 && m<=20){
            c++;
        }
        else{
            o++;
        }
    }
    cout << c << " in" <<endl;
    cout << o << " out" <<endl;
    }
}
