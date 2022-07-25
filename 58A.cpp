#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, check = "hello";
    int aux=0;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]==check[aux]){
            aux++;
        }
        if(aux>=5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}