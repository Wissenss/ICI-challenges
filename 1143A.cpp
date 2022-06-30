#include <iostream>
using namespace std;

int main(){
    int n, previous = -1, current = 0, index;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>current;
        if(previous!=current || previous == -1){
            previous = current;
            index = i;
        }
    }
    cout<<index;
}