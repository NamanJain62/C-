using namespace std;

#include<iostream>
#include <fstream>

int main(){

    /*ofstream MyFile("abcd.txt");

    MyFile <<"this is sparata!";
    MyFile.close();*/


    string myText;
    ifstream MyReadFile("abcd.txt");
    while(getline(MyReadFile,myText))
        cout<<myText;


return 0;
}
