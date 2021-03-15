#include<iostream>
using namespace std;

int main(){
    long long a,b,c,d,e,f,g;
    cin >> a >> b >> c;
    cin >> d >> e >> f;

    if((a+b+c)>=(d+e+f)){
        cout << "It is a kind of magic" <<endl;
    }
    else{
        cout << "There are no miracles in life" <<endl;
    }
}
