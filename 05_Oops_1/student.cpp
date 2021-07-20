#include<iostream>
using namespace std;
class student{
    public:
    int rollno;

    private:
    int age;
    int id;

    public:
    int  getAge(){
        return age;

    };
    void setid(int i){
        id=i;
        cout<<id<<endl;
    }

};