#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c=0, r=0, s=0, total=0;
    char ch;

    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> n >> ch ;
        if(ch =='C'){
            c = c+n;
        }
        if(ch =='R'){
            r = r+n;
        }
        if(ch =='S'){
            s = s+n;
        }
    }
    total=c+r+s;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c <<endl;
    cout << "Total de ratos: " << r <<endl;
    cout << "Total de sapos: " << s <<endl;
    printf("Percentual de coelhos: %.2f %c\n", (float)(c*100)/total,'%');
    printf("Percentual de ratos: %.2f %c\n", (float)(r*100)/total, '%');
    printf("Percentual de sapos: %.2f %c\n", (float)(s*100)/total, '%');

}
