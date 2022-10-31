using namespace std;

#include <iostream>

class Hero{
    public:
    int health;
    int level=100;

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
};


int main(){
    Hero suresh(50,70);
    suresh.print();

    Hero ritesh(suresh);
    ritesh.print();
    
    ritesh.health = suresh.health;
    ritesh.level = suresh.level;




    /*
    //object created statically
    Hero ramesh(10); 
    cout<<"Address is: "<<&ramesh<<endl;
    ramesh.getHealth();

    ramesh.print();

    Hero *h =new Hero;
    h->print();

    Hero temp(22, 50);
    temp.print();*/



    /*
    Hero h1;
    cout<< "Level is"<<h1.level<<endl;
    cout<<"health is"<<h1.getHealth()<<endl;
    //dynamically 
    Hero *b=new Hero;
    cout<< "Level is"<<(*b).level<<endl;
    cout<<"health is"<<(*b).getHealth()<<endl;

    cout<< "Level is"<<b->level<<endl;
    cout<<"health is"<<b->getHealth()<<endl;


    cout<<"Ramesh health is "<<h1.getHealth()<<endl;
    h1.level = 50;
    h1.setHealth(5);

    cout<<"health is: "<<h1.health<<endl;
    cout<<"Level is: "< <h1.level<<endl;
    h1.print();*/
    return 0;
}
