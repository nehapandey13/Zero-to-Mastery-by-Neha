#include<iostream>
#include "product.cpp"
using namespace std;

class student{
    public:
    int age;
    int rollnumber;
    char name[50];
};
// the class product is defined in another file name product
// class product{
//     int weight;
//     int id;
//     char name[50];
// };
int main(){

//creating obect statically
student s1;
student s2;
student s3,s4,s5;

// creating obect dynamically

student *s6 = new student;

s1.age=21;
s1.rollnumber=63;

cout<<s1.age<<endl;
cout<<s1.rollnumber<<endl;

(*s6).age=24;
(*s6).rollnumber=56;

//one more way
s6->age=24;
s6->rollnumber=56;

cout<<"Product Info"<<endl;

product p1;
p1.weight=50;
p1.id=31;
cout<<p1.weight<<endl;
cout<<p1.id<<endl;

return 0;
}