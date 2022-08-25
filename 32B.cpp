#include <bits/stdc++.h>
using namespace std;

int main(){
    string message, decrypted_message = "";

    cin>>message;

    for(int i=0; i<message.size(); i++){
        if(message[i]=='.'){
            decrypted_message += '0';
        }else if(message[i]=='-'){
            if(message[i+1]=='.'){
                decrypted_message+='1';
            }else{
                decrypted_message+='2';
            }
            i++;
        }
    }

    cout<<decrypted_message;
}