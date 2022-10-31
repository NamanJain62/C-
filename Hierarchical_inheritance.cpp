using namespace std;
#include <iostream>

class A {
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};

class B:public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"inside function 3"<<endl;
    }
};



int main(){
    
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
    //obj3.func2(); this will not run because class C will not inherit the class B
    return 0;
}