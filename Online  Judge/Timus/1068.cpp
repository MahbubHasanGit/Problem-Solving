#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,sum=0,i;
    cin >> n;
    if(n>0){
        for(i=1; i<=n; i++){
            sum = sum+i;
        }
        cout << sum << endl;
    }
    else(n<0){
        for(i=(-2); i>=-n; i--){
            sum = sum+i;
        }
        cout <<sum <<endl;
    }
}
