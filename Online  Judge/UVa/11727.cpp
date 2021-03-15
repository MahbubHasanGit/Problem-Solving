#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, e1, e2, e3, m;
    cin>> t;
    for(int i=1; i<=t; i++){
        cin >> e1 >> e2 >> e3;
        if(e1>e2 && e1<e3 || e1<e2 && e1>e3){
            m = e1;
        }
        if(e2>e1 && e2<e3 || e2<e1 && e2>e3){
            m = e2;
        }
        if(e3>e1 && e3<e2 || e3<e1 && e3>e2){
            m = e3;
        }
        cout << "Case " << i << ": " << m <<endl;
    }
}
