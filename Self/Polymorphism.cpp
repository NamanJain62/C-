using namespace std;
#include <iostream>

//function overloading me apke function ka name same hoga pr uska different no of argument bhi ho skta hai
//function overloading me apke function ka argument ka type bhi differnet ho skta hai

class A{
    public:
    void sayHello(){
        cout<<"hello Naman Jain"<<endl;
    }

    int sayHello(string name, int n){
        cout<<"Hello Naman"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }

//A function with default argument if no value passed by user
    int add(int x,int y, int z=0,int w=0){
        return (x+y+z+w);
    }
};

int main(){
    
    A obj;
    obj.sayHello();
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10,20,30)<<endl;
    cout<<obj.add(10,20,30,40)<<endl;
    
    return 0;
}