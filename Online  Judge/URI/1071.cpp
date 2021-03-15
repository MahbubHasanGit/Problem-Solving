#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, r=0;
    cin >> n >> m ;

    if(n>m){
        for(int i=m+1; i<n; i++){
            if(i%2!=0){
                r+=i;
            }
        }
        cout << r <<endl;
    }
    if(n<m){
        for(int i=n+1; i<m; i++){
            if(i%2!=0){
                r+=i;
            }
        }
        cout << r <<endl;
    }

}
