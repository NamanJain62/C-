#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] = {2,4,6,8,12,18};
    int n,size=6;
    cin>>n;
    for(int i=n-1;i<size;i++){
       arr[i]=arr[i+1];      
    }
    size--;
    cout<<endl;

    for(int i=0;i<size;i++){
       cout<<arr[i]<<"\t";      
    }

    return 0;
}