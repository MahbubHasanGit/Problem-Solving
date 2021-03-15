#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[20];
    for(int i=0; i<20; i++){
            cin >> N[i] ;
    }
    for(int j=19; j>=0; j--){
        cout << "N[" << 19-j << "] = " << N[j] <<endl;
    }
}


