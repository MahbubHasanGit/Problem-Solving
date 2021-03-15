#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x >> y;
        for(int j=1; j<=y; j++){
            if(x%2!=0){
                sum = sum+x;
                x = x+2;
            }
            else{
                if(j==1){
                    x++;
                }
                sum = sum+x;
                x = x+2;
            }
        }
        cout << sum <<endl;
        sum = 0;
    }
}
