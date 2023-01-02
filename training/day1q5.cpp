#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int value;
    cin>>value;
    for(int i=0;i<n+1;i++){
        if(i==position){
            arr[i]=arr[i+1];
            arr[position]=value;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[n];
    }
}