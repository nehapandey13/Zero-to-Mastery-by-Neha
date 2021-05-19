#include<iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;

}
void reversed(char input[]){
    int l=length(input);
    int s=0;
    int e=l-1;
    while(s<=e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
}

int main(){
    char name[100];
    cout<<"Enter the string"<<endl;
    cin.getline(name,100);
    reversed(name);
    cout<<"Reversed string : "<<name<<endl;

return 0;
}