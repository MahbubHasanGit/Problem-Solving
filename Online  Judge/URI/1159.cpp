#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    while(true){
        cin >> n;
        if(n==0){
            return 0;
        }
        else{
            for(int i=1; i<=5; i++){
                if(n%2==0){
                sum = sum+n;
                n = n+2;
            }
            else{
                if(i==1){
                    n++;
                }
                sum = sum+n;
                n = n+2;
            }
        }

    }
    cout << sum << endl;
    sum = 0;
    }
}

