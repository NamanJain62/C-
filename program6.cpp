using namespace std;

#include<iostream>

int main(){

int a =10;
int b=20;
int c=15;
int d=2;


if(a>b){

    if(a>c){
            cout<<"A is the greatest number"<<endl;
    }
    }else{
if(b>c){
        if(b>a){
                cout<<"B is the greatest number"<<endl;
            }
            else{
                cout<<"C is greatest number"<<endl;
                }
            }
            }


switch(d){

case 1:
    cout<<"number is 1";
    break;
case 2:
    cout<<"number is 2";
    break;
case 3:
    cout<<"number is 3";
    break;
default:
    cout<<"number is not valid";
    break;}

}

