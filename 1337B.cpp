#include <iostream>
using namespace std;

int main()
{
    int t, x, n, m;

    cin>>t;

    for(int i=0; i<t; i++){
        cin>>x>>n>>m;
        while(1){
            if (x<=0) break;

            if(x>20 && n>0){
                x = x/2 + 10;
                n--;
            }
            else if(m>0){
                x -= 10;
                m--;
            }
            else{
                break;
            }
        }
        if (x<=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}