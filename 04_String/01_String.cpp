#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// #include<vector>

using namespace std;

int main(){
    // string s="abc";
    // cout<<s<<endl;

    // string s2;
    // s2="def";
    // cout<<s2<<endl;

    // string *sp=new string;
    // *sp="mno";
    // cout<<*sp<<endl;
    

    // string s="neha";
    // vector<string>v; //vector is similler to 2D array
    // v.push_back(s);
    // v.push_back("pandey");

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    //     sort(v[i].begin(),v[i].end());
    //     cout<<v[i]<<endl;
    //  }


    // string s3;
    // cout<<"Enter the string:"<<endl;
    // cin>>s3; // after space cin will not take the input
    // cout<<s3<<endl;
    
    // string s3;
    // cout<<"Enter the string:"<<endl;
    // getline(cin,s3);
    // cout<<s3<<endl;


    // string s4="abcdef";
    // cout<<s4[1]<<endl;


    // string s5="neha";
    // s5[0]='N';
    // cout<<s5<<endl;

    // 
    
    // string str1,str2,str3,str4;
    // str1="Siya";
    // str2="Ram";
    // str3=str1+str2;
    // str4="";
    // str4+=str1+str2+str3+"helloWorld";
    // cout<<"string1:"<<str1<<" "<<"string2:"<<str2<<" "<<"string3:"<<str3<<endl;
    // cout<<"string 4 Which was empty initially now:"<<str4<<endl;
    // cout<<str4.size()<<endl;
    // cout<<str4.length()<<endl;

    // cout<<str4.substr(3)<<endl;
    // cout<<str4.substr(3,5)<<endl;// after index 3 give us five character
    // string s5=str4.substr(3,4);
    // cout<<s5<<endl;

    //cout<<str4.find("helloWorld")<<endl;

    int a=1237;
    string s6= to_string(a);
    cout<<s6<<endl;
    s6[2]='5';
    cout<<s6<<endl;

    a=atoi(s6.c_str());
    cout<<a<<endl;

    

    return 0;
}