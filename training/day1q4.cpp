#include<iostream>
using namespace std;
int main(){
       int n,i,j,k,m;
       cin>>n;
       int arr1[n],arr2[n];
       for(int i=0;i<n;i++){
        cin>>arr1[i];
       }
       cout<<"\n";
       cin>>m;
       for(int j=0;j<m;j++){
        cin>>arr2[j];
       }
       for(int i=0;i<(n+m);i++){
        arr2[m+i]=arr1[i];
       }
       for(int k=0;k<n+m;k++){
        cout<<arr2[k];
       }
       

}