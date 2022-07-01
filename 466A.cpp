#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b, cost = 0;
    cin>>n>>m>>a>>b;
    if(float(b)/m<a){
        cost += int(n/m)*b;
        if(a*(n%m)>b){
            cost+=b;
        }
        else{
            cost+=a*(n%m);
        }
    }
    else{
        cost += a*n;
    }
    cout<<cost;
}