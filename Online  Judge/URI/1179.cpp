#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[15], par[5], co=0;
    for(int i=1; i<=15; i++){
        cin >> n[i];
    }
    for(int j=0; j<5; j++){
            for(int k=0; k<15; k++){
                if(n[k]%2==0 || abs(n[k])%2==0){
                par[j] = n[k];
                co++;
                if(co==1){
                    k=16;
                    co=0;
                }
        }
      }
    }

    for(int g=0; g<5; g++){
        cout << "par[" << g << "] = " << par[g] <<endl;
    }

}

