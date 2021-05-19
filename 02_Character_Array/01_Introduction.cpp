#include<iostream>
using namespace std;

int main(){
    char name[100];
    cout<<"Enter your name :";
    cin>>name;
    name[2]='\0';
    name[3]='e';
    name[4]='d';
    cout<<"Your name is :"<<name<<endl;
    return 0;
}