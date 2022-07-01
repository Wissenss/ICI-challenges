#include <bits/stdc++.h>
using namespace std;

int main(){
    int vector[3] = {0};
    int input[3] = {0}; 
    int n;

    cin>>n;

    for (int i=0; i<n; i++){
        cin>>input[0]>>input[1]>>input[2];
        for(int j=0; j<3; j++) vector[j]+=input[j];   
    }

    if(vector[0] == 0 && vector[1] == 0 && vector[2] == 0)
        cout<<"YES";
    else
        cout<<"NO";
}