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
    //char name[100];
    char name[10];
    cout<<"Enter your name :";
    //cin>>name; //cin ignore the input value which is entered after space,tab or new line.
   // cin.getline(name,100); //cin accept the input value till ENTER(\n).
    // name[2]='\0';
    // name[3]='e';
    // name[4]='d';
    //cin.getline(name,4);
    cin.getline(name,10,'o');// by default the value of delimiter is '\n'.

     cout<<"Your name is :"<<name<<endl; 

   // cout<<"length is:"<<length(name)<<endl;


    return 0;
}