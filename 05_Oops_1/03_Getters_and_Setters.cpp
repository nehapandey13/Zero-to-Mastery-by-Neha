#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
student *s6 = new student;
(*s6).setid(36);
cout<<"s6 Age:"<<s6->getAge()<<endl;


return 0;

}