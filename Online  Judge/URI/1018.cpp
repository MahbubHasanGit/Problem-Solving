#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,w,e,r,t,y,u;
    cin >> n;
    if(n>0 && n<1000000){
    cout << n << endl;
    q = n/100;
    cout << q <<" nota(s) de R$ 100,00" <<endl;
    w = (n%100)/50;
    cout << w <<" nota(s) de R$ 50,00" <<endl;
    e = (n%100)%50/20;
    cout<< e <<" nota(s) de R$ 20,00" <<endl;
    r = (n%100)%50%20/10;
    cout << r <<" nota(s) de R$ 10,00" <<endl;
    t = (n%100)%50%20%10/5;
    cout << t <<" nota(s) de R$ 5,00" <<endl;
    y = (n%100)%50%20%10%5/2;
    cout << y <<" nota(s) de R$ 2,00" <<endl;
    u = (n%100)%50%20%10%5%2/1;
    cout << u <<" nota(s) de R$ 1,00" <<endl;
    }
}
