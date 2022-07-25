using namespace std;

#include <iostream>

int main(){
    int a[5]= {0,1,2,3,4};
    for(int i =0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    char b[5] = {'h','e','l','l','o'};
    for(int i =0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }

    int c[5];

    for(int i=0;i<5;i++)
    {
        cin>>c[i];
    }
    for(int i =0;i<5;i++)
    {
        cout<<c[i];
    }
return 0;
}
