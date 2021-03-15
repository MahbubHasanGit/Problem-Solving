#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, co=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        for(int j=2; j<m; j++){
            if(m%j ==0){
                co++;
            }
        }
        if(co==0){
            cout << m << " eh primo" <<endl;
        }
        else{
            cout << m << " nao eh primo" <<endl;
        }
        co=0;
    }
}

