#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

return 0;

}