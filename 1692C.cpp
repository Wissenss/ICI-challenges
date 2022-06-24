#include <iostream>
using namespace std;

void print(int matrix[8][8])
{
    for(int j=0; j<8; j++){
        for (int k=0; k<8; k++){
            cout<<matrix[j][k];
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    int matrix[8][8] = {0};

    char input;

    cin >> t;

    for (int i=0; i<t; i++){
        matrix[8][8] = {0};
        cout<<"hellow";
        for(int j=0; j<8; j++){
            for (int k=0; k<8; k++){
                cin>>input;
                //cout<<input<<endl;

                if (input=='#'){
                    matrix[j][k] = 1;
                }
                
                if(j==0 || j==1 || k==0 || k==1) continue;
                
                if (matrix[j][k] == 1 &&
                    matrix[j-1][k-1] == 1 &&
                    matrix[j-2][k-2] == 1 &&
                    matrix[j-2][k] == 1 &&
                    matrix[j][k-2] == 1){
                        cout<<j<<' '<<k<<endl;
                    }
            }
        }
        print(matrix);
    }    
}