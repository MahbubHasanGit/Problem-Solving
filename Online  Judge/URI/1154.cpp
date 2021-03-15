#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum=0, c=0;
    while(true){
        cin >> n;
        if(n>0){
            sum+=n;
            c++;
        }
        else{
            printf("%.2f\n", sum/c);
            return 0;
        }
    }
}



