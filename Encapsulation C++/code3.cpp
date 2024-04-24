// here we see about the static and non static data.
#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    static int c,d; //static data
    public:
    void logic1()// it is non static function and and not static function use both static and non static data.
    {
        int a=10,b=20,c=30,d=40;
        cout<<"Non static Function: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    }
    static void logic2(){ // it is static function and static function only use static data.
         c=100;
         d=200;
        // a=30,b=40; it show error if we use non static data  in static function.
        cout<<"Static Function: "<<c<<" "<<d<<endl;
    }
};
int A::c; // memory Allocation
int A::d;
int main(){
    A obj;
    obj.logic1();
    A::logic2();
    return 0;
}