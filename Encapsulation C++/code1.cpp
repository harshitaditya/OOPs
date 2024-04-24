#include<iostream>
using namespace std;
class Student
{
private://if we not use private keyword then it is by default private.
int id; // Non-static data
string name;
int age;
int roll;
public:
void set(int id, string name,int age,int roll){// member function this is also called non-static function,instance function. 
    this->id=id;
    this->name=name;
    this->age=age;
    this->roll=roll;
}
void get(){
    cout<<"id = " <<id<<endl;
    cout<<"Name = " <<name<<endl;
    cout<<"Age = " <<age<<endl;
    cout<<"Roll = " <<roll<<endl;
}
    
};


int main(){
    Student s1,s2;
    s1.set(1,"Aditya",19,12);
    s1.get();
    
    s2.set(2,"Anurag",17,2);
    s2.get();
    return 0;
}