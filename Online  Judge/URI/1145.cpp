#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y,c=0;
    cin >> x >> y;
            for(int i=1; i<=y; i++)
            {
                c++;
                if(c==x){
                    cout << i ;
                }
                else{
                    cout << i <<" ";
                }

                if(c==x)
                {
                    c= 0;
                    cout << endl;
                }
            }
            return 0;
}
