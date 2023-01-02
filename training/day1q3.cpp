#include<iostream>
using namespace std;
int main(){
       int n,i,j;
       cin>>n;
       int arr1[n],arr2[n];
       for(int i=0;i<n;i++){
        cin>>arr1[i];
       }
       for(int k=0;k<n;k++){
        arr2[k]=arr1[k];
       }
       for(int k=0;k<n;k++){
        cout<<arr2[k];
       }


}