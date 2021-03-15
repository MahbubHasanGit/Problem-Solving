#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a[3];
    for(int q=0; q<3; q++){
        cin >> a[q];
    }
    if(a[0] >0 && a[1] >0 && a[2] >0){
            for(int i=0; i<3; i++){
        for(int j =i+1; j<3; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int s = a[0];
    int d = a[1];
    int f = a[2];

    if(s >= d+f){
        cout << "NAO FORMA TRIANGULO" <<endl;
    }
    else{
            if(s*s == d*d+f*f){
        cout<< "TRIANGULO RETANGULO" <<endl;
    }
    else if(s*s > d*d+f*f){
        cout<< "TRIANGULO OBTUSANGULO" <<endl;
    }
    else{
        cout<< "TRIANGULO ACUTANGULO" <<endl;
    }
    }
    if(s==d && s==f){
        cout<< "TRIANGULO EQUILATERO" <<endl;
    }
    if((s==d && s!=f) || (d==f && d!=s) || (s==f && s!=d)){
        cout<<"TRIANGULO ISOSCELES" <<endl;
    }
    }
}

