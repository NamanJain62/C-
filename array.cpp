using namespace std;
#include <iostream>

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    /*
    fill_n(arr,5,1);    
    cout<<arr[3];*/
    int first[5]={1,2,3,4,5};
    printArray(first,5);

    int Second[5]={45,62,35,40};
    printArray(Second,5);
}