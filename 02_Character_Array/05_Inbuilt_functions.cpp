//Here we will see some inbuilt function
#include<iostream>
#include<cstring>
using namespace std;

// bool mystrcmp(char input1[],char input2[]){
//     if(strlen(input1)!=strlen(input2))
//     return false;
//     for(int i=0;input1[i]!='\0';i++){
//         if(input1[i]!=input2[i]){
//             return false;
//         }
//     }
//     return true;
// }


// my own string copy function
// void mystrcpy(char input1[],char input2[]){
//     int n=strlen(input2);
//     for(int i=0;i<=n;i++){
//         input1[i]=input2[i];
//     }
// }

// my own strcat function 
void mystrcat(char input1[],char input2[]){
    int n=strlen(input1);
    int m=strlen(input2);
    for(int i=0;i<=m;i++){
        input1[i+n]=input2[i];
    }
}

int main(){
    //01_First function-->01.strlen(string argunment)--find length of the string
    // char str1[100];
    // cin>>str1;
    // int len=strlen(str1);
    // cout<<"Length : "<<len<<endl;

    // 02_Second function-->compare two string -->strcmp(str1,str2)-->return zero(equal),return nonZero(nonZero)
    // char str1[100];
    // char str2[100];
    // cout<<"Enter two strings."<<endl;
    // cin>>str1>>str2;
    // if(strcmp(str1,str2)==0){
    //     cout<<"Strings are Equal."<<endl;
    // }
    // else{
    //     cout<<"String are not equals"<<endl;
    // }
    // lets make our own string compare function
    // if(mystrcmp(str1,str2)){
    //     cout<<"Strings are Equal."<<endl;
    // }
    // else{
    //     cout<<"String are not equals"<<endl;
    //  }


    //03_Third function-->strcpy-->string copy function -->string copy function also copy the null character
    // char str1[100]="abcd";
    // char str2[100]="abc";
    // cout<<"Before copying the string:"<<endl;
    // cout<<"String1:"<<str1<<endl;
    // cout<<"String2:"<<str2<<endl;
    //strcpy(str1,str2);
    //strcpy(str1,"Neh");

    // Let's make our own string copy function
    // mystrcpy(str1,str2);
    // cout<<"After copying the string:"<<endl;
    // cout<<"String1:"<<str1<<endl;
    // cout<<"String2:"<<str2<<endl;

    //04_Forth function-->string n copy funtion-->strncpy(str1,str2,n)-->copy only first n charater from str2 to str1-->this does not copy null character while strcpy copy null character 
    // char str1[100]="Neha";
    // char str2[100]="Pandey";
    // char str1[100]="Neha";
    //  char str2[100]="Pa";
    // cout<<"Before copying the string:"<<endl;
    // cout<<"String1:"<<str1<<endl;
    // cout<<"String2:"<<str2<<endl;
    // strncpy(str1,str2,3);
    // cout<<"After copying the string:"<<endl;
    // cout<<"String1:"<<str1<<endl;
    // cout<<"String2:"<<str2<<endl;

    //05_Fivth function and last function -->string concatenatation function -->strcat(str1,str1)-->It is basically append one string from other;
    char str1[100]="Neha";
    char str2[100]="Pandey";
    cout<<"Before appending the string:"<<endl;
    cout<<"String1:"<<str1<<endl;
    cout<<"String2:"<<str2<<endl;
    //strcat(str1,str2);
    //Let's make our own strcat() funtion
    mystrcat(str1,str2);
    cout<<"After appending the string:"<<endl;
    cout<<"String1:"<<str1<<endl;
    cout<<"String2:"<<str2<<endl;
   
    return 0;
    // So we have seen five functions
    // 01.strlen
    // 02.strcmp
    // 03.strcpy
    // 04.strncpy
    // 05.srtcat
}