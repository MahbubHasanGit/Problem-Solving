#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m[1000], mi=m[0], po=0;
    cin >> n;
    for(int i=0; i<n; i++){
        scanf("%d",&m[i]);

        if(mi>m[i]){
            mi = m[i];
            po = i;
        }
    }
    cout<< "Menor valor: " << mi <<endl;
    cout << "Posicao: " << po << endl;
}


