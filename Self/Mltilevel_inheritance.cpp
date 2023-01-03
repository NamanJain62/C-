using namespace std;
#include <iostream>
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal {

};

class GermanSpherad: public Dog{

};

int main(){
    GermanSpherad g;
    g.speak();

    return 0;
}