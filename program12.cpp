using namespace std;

#include <iostream>

class MyClass{
    public:
    int a;
    int b;

    MyClass(int x,int y){
        a=x;
        b=y;
    }

    void print(){
        cout<<"a:"<<a;
        cout<<"b:"<<b;
    }
};

int main(){
    MyClass m1(10,20);

    m1.print();

return 0;
}
