using namespace std;

#include <iostream>

class Parent1{
public:
    void par1(){
    cout<<"This is parent1";
    }
};

class Parent2{
public:
    void par2(){
    cout<<"This is parent2";
    }

};

class Child:public Parent1, public Parent2{
public:
    void show_child(){
    cout<<"i am child";
    }
};

int main(){
    Child c1;
    c1.par1();
    c1.par2();
    c1.show_child();

return 0;
}
