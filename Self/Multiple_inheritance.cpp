using namespace std;
#include <iostream>
class Animal{
    public:
    int age;
    int weight;

    public:
    void Bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Hybrid: public Animal, public Human {

};


int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.Bark();

    return 0;
}