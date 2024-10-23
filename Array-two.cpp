#include<iostream>
using namespace std;

int main(){
    int matrix[3] [3];

    cout<< "Enter the value of matrix";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter the Emlement("<< i << " , " << j << " ) ";
            cin>>matrix[i][j];
        }
    }

    cout<< "Your entered matrix is: "<<endl;

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
