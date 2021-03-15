#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v, n[10];
    cin>> v;

    for(int i=0; i<10; i++){
            if(i==0){
                    n[i] = v;
            }
            else{
                n[i] = n[i-1]*2;
            }
    }
    for(int j=0; j<10; j++){
        cout << "N[" << j << "] = " << n[j] <<endl;
    }
}
