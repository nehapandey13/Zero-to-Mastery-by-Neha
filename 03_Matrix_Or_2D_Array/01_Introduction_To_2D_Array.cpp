#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and colmuns respectivly:"<<endl;
    cin>>m>>n;
    int mat[100][100];
    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    //Row wise Matrix representation 
    cout<<"Row wise matrix representation:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    //column wise Matrix representation 
    cout<<"Column wise matrix representation:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
