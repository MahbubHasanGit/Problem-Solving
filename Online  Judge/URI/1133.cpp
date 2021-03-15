#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum=0;
    cin >> n >> m ;
    if(n<m){
        for(int i=n+1; i<m; i++){
            if(i%5==2 || i%5==3){
                cout << i<<endl;
            }
        }
    }
    else{
        for(int j=m+1; j<n; j++){
            if(j%5==2 || j%5==3){
                cout << j<<endl;
            }
        }
    }
}

