#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    long long int n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n<=0){
            cout<<0;
        }
        else if(n<6){
            cout<<15;
        }
        else if(n%2==0){
            cout<<fixed<<setprecision(0)<<(n*5)/2;
        }
        else{
            cout<<fixed<<setprecision(0)<<((n+1)*5)/2;
        }
        cout<<endl;
    }
}