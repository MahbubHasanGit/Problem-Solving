#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int a[10000], h, p;
    for(int i=0; i<100; i++){
        cin >> a[i];
        if(i==0){
         h = a[i];
         p = i+1;
        }
        if( h < a[i]){
            h = a[i];
            p = i+1;
        }
    }
    cout << h <<endl;
    cout << p <<endl;
}
