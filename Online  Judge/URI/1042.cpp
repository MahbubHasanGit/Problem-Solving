#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3];
    for(int q=0; q<3; q++){
        cin >> a[q];
        b[q] = a[q];
    }
    for(int i=0; i<3; i++){
        for(int j =i+1; j<3; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int k=0; k<3; k++){
        cout << a[k] <<endl;
    }
    cout << endl;
    for(int k=0; k<3; k++){
        cout << b[k] <<endl;
    }
}
