using namespace std;
#include<iostream>

class Dimensions{
public:
    float side = 10.67;

};

class Square: public Dimensions{
public:
    double area(double x){
    return(x*x);
    }
};

int main(){
    Square s1;
    cout<<s1.area(s1.side);

return 0;
}
