#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n, m[10000];
    cin >> n;
    if(n<10000){
    for(int i=0; i<n; i++){
        cin >> m[i];
    }
    for(int j=0; j<n; j++){
        if(m[j]==0){
            cout << "NULL" <<endl;
        }
        if(m[j]%2!=0 &&  m[j]>0){
            cout << "ODD POSITIVE" <<endl;
        }
        if(m[j]%2!=0 &&  m[j]<0){
            cout << "ODD NEGATIVE" <<endl;
        }
        if(m[j]%2==0 &&  m[j]>0){
            cout << "EVEN POSITIVE" <<endl;
        }
        if(m[j]%2==0 &&  m[j]<0){
            cout << "EVEN NEGATIVE" <<endl;
        }
    }
    }
}
