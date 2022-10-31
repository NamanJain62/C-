using namespace std;

#include <iostream>

class Hero{
    public:
    int health;
    int level=100;
    static int timeToComplete;
     

    Hero(){
        cout<<"Default Constructor Called"<<endl;
    }

    //parameterised constructor

    Hero(int health){
        cout<< "this -> "<<this <<endl;
        this -> health =health;
    }

    Hero(int health,int level){
        cout<< "this -> "<<this <<endl;
        this -> health =health;
        this -> level= level;
    }

    void print(){
        cout<<"Health is: "<<health<<endl;
        cout<<"Level is: "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health =h;
    }

    void setLevel(int l){
        level = l;
    }

    static int random(){
        cout<<timeToComplete<<endl;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete=5;

int main(){
    cout<<Hero::timeToComplete<<endl;

    Hero a;

    cout<<a.timeToComplete<<endl;

    //Static
    //Hero a;
    //Dynamic
    //Hero *b= new Hero;
    //Manually Destructor call
    //delete b;

    return 0;
}
