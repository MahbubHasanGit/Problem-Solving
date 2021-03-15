#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int m=60;
    for(int i=1; i<=39; i=i+3){
        if(i==1){
            cout <<"I=" << i<< " J=" << m <<endl;
        }
        else{
            m = m-5;
            cout <<"I=" << i << " J=" << m <<endl;
        }
    }
}
