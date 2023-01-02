#include <iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
    int start=0;
    int end = size-1;

    int mid=start + (end-start)/2;

    while(start <= end){

        if(arr[mid]== key){
        return mid;
        }

        //go to right part
        if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }

        mid=start + (end-start)/2;
    }
    
    return start;
}

int main(){
    int arr[10] = {2,4,6,8,12,18};
    int size=6;
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int arrIndex = binarysearch(arr,6,n);
    arr[size]=n;
    size++;

     
    for(int i=size-1;i>arrIndex;i-- ){
        int a=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=a;
    }
    

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;

}