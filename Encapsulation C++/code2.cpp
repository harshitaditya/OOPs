// IN this code we see about static and non-static function.
#include<iostream>
using namespace std;
class A{
    public:
    void logic1(){//non staic function is also called instance function.
        cout<<"It is non static function"<<endl;
    }
    static void logic2(){//Static function is also called class Function.
        cout<<"It is Static function";
    }
};
int main(){
    A obj;
    obj.logic1();// here we use dot(.) to call the non static function.
    A::logic2();// here we use SRO (Scope resolution operator) to call the static function.
    return 0;
}