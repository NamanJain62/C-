#include <iostream>
using namespace std;

int getMAX(int size,int num[],int kthmax){
    int max= INT8_MIN;

    int Kthmax[kthmax];
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
            for(int j=0;j<size;j++){
                Kthmax[j]=max;
            }
        }
    }
    return Kthmax[kthmax];
}


int main(){
    int arr[100];
    int size;
    cout<<"Size of the array: ";
    cin>>size;
    int kthMax;
    cout<<"Array elements: "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Kth element: ";
    cin>>kthMax;

    cout<<"Kth Maximum elemet: "<<getMAX(size,arr,kthMax);

}