#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        for(int j=1; j<m; j++){
            if(m%j ==0){
                sum = sum+j;
            }
        }
        if(sum==m){
            cout << m << " eh perfeito" <<endl;
        }
        else{
            cout << m << " nao eh perfeito" <<endl;
        }
        sum = 0;
    }
}
