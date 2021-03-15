#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum=0;
    cin >> n >> m ;
    if(n<m){
        for(int i=n; i<=m; i++){
            if(i%13!=0){
                sum +=i;
            }
        }
    }
    else{
        for(int j=m; j<=n; j++){
            if(j%13!=0){
                sum +=j;
            }
        }
    }
    cout << sum <<endl;
}
