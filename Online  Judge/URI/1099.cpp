#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int r[10000], t, rs=0, x, y, temp;
    cin >> t;
    for(int i =0; i<t; i++){
        cin >> x >> y ;
        r[i] = x;
        r[i+1] = y;
    }
    for(int j=0; j<t*2; j++){
        if(r[j]<r[j+1]){
            for(int k=r[j]; k<r[j+1]; k++){
                if(k%2!=0){
                    rs = rs+k;
                }
            }
            cout << rs <<endl;
        }
        if(r[j]>r[j+1]){
        for(int f=r[j]; f<r[j+1]; f--){
            if(f%2!=0){
                    rs = rs+f;
                }
            }
            cout << rs <<endl;
        }
        }
    }
