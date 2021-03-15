#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n1, n2, n3, n4, x;
    cin >> n1 >> n2 >> n3 >> n4 ;
    float m = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    printf("Media: %.1f\n",m);

    if(m>=7.0){

        cout<<"Aluno aprovado."<<endl;
    }
    else if(m < 5.0){
        cout<<"Aluno reprovado."<< endl;
    }
    else if(m >= 5.0 && m<= 6.9 ){
        cout<<"Aluno em exame." <<endl;
        cin >> x;
        printf("Nota do exame: %.1f\n",x);
        if((m+x)/2.0 >=5.0){
            cout<<"Aluno aprovado." <<endl;
        }
        else if((m+x)/2.0 <=4.9){
            cout <<"Aluno reprovado." << endl;
        }
        printf("Media final: %.1f\n",(m+x)/2);
    }
}
