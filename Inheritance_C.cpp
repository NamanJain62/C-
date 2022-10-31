using namespace std;
#include <iostream>

class Human{  
    
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }
}; 

class Male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }


};

int main(){

    Male m1;
    //cout<<m1.age<<endl;
    //cout<<m1.weight<<endl;
    cout<<m1.getHeight()<<endl;

    return 0;
}