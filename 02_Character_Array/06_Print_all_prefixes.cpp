#include<iostream>
#include<cstring>
 using namespace std;

 void printPrefix(char input1[]){
     
     for(int i=0;i<input1[i]!=0;i++){
         for(int j=0;j<=i;j++){
             cout<<input1[j];
         }
         cout<<endl;
     }
 }

 int main(){
     char str1[100];
     cout<<"Enter the string to print all the prefixes."<<endl;
     cin>>str1;

    //  int n=strlen(str1);
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<=i;j++){
    //          cout<<str1[j];
    //      }
    //      cout<<endl;
    //  }
    printPrefix(str1);
    return 0;
 }