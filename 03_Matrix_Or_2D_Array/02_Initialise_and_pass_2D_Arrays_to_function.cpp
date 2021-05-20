#include<iostream>
using namespace std;

void printarr(int a[][3],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[][3]={
        {1,2},
        {5,6,7},
        {4,5}
    };
    printarr(a,3,3);

    return 0;
}