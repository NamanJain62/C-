using namespace std;
#include <iostream>

void update(int arr[],int n){
    cout<<"Inside the function"<<endl;

    arr[0]=120;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    cout<<"Going back to main function"<<endl;
}


int main(){
    int arr[3]={1,2,3};
    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}