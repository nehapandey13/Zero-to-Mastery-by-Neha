#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;

}

int main(){
    char name[100];
    cout<<"Enter your name :";
    cin>>name;
    // name[2]='\0';
    // name[3]='e';
    // name[4]='d';
     cout<<"Your name is :"<<name<<endl;

    cout<<"length is:"<<length(name)<<endl;


    return 0;
}