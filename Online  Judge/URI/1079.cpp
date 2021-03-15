#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n, c=0;
    float m[10000];
    cin >> n;
    for(int i=0; i<n*3; i++){
            cin >> m[i] ;
    }
        for(int b=0; b<n*3; b=b+3){
            printf("%.1f\n",(m[b]*2+ m[b+1]*3+ m[b+2]*5)/10);
        }
}
