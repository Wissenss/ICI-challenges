#include <iostream>
using namespace std;

int main()
{
    int t, n, m, ai;

    cin>>t;

    for(int j=0; j<t; j++){
        cin>>n>>m;
        m=(-1)*m; 
        for(int i=0; i<n; i++){
            cin>>ai;
            m+=ai;
        }
        if(m>=0){
            cout<<m<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
}