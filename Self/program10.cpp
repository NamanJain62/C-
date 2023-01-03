using namespace std;
#include <iostream>


int add(int x, int y){

    return x+y;

    }

double add(double x,double y){   //function overloading will have same function name but different parameter and return type

    return x+y;

}


int main(){
    cout<<add(3,4)<<endl;
    cout<<add(10.5,16.5);
return 0;
}
