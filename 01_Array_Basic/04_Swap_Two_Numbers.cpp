#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Swapped value is "<<a<<" "<<b<<endl;
}