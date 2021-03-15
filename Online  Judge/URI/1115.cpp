#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(1){
    cin >> n >> m ;
    if(n==0 || m==0){
        return 0;
    }
    else{
        if(n>0 && m>0){
            cout << "primeiro" <<endl;
        }
        else if(n>0 && m<0){
            cout << "quarto" <<endl;
        }
        else if(n<0 && m<0){
            cout << "terceiro" <<endl;
        }
        else if(n<0 && m>0){
            cout << "segundo" <<endl;
        }
    }
    }
}
