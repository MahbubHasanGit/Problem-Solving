#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, oddSum=0;

    cin>> t;
    for(int i=1; i<=t; i++){
        cin >> a >> b ;
        for(int j=a; j<=b; j++){
            if(j%2 !=0){
                oddSum+=j;
            }
        }
        cout<< "Case " <<i <<": " << oddSum <<endl;
        oddSum = 0;
    }
}
