using namespace std;

#include <iostream>
#include <cstring>
#include <math.h>


int main(){

    char c1[] ="Great";
    char c2[] ="Learning";

    cout<<"Concatenate: "<<strcat(c1,c2)<<endl;
    cout<<"String length: "<<strlen(c1)<<endl;
    cout<<"Copy string: "<<strcpy(c1,c2)<<endl;


    int a=2;

    cout<<"Sin "<<(sin(a))<<endl;

    cout<<"Cos "<<(cos(a))<<endl;

    cout<<"tan "<<(tan(a))<<endl;

    cout<<"Square root of a "<<(sqrt(a))<<endl;

    cout<<"Power of 3: "<<(pow(3,2))<<endl;

    cout<<"floor "<<floor(2)<<endl;

    cout<<"absolute value "<<abs(5.55)<<endl;

    bool machineWorking = true;

    cout<<"Machjine is working then its value is "<<machineWorking<<endl;

    machineWorking =false;

    cout<<"when machine stop work, then its value is "<<machineWorking<<endl;



    return 0;
}
