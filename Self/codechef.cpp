//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>

using namespace std;

long long fact(int x){
    long long a=1;
    for(long i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}

int factorial(int arr[],int n){
    int y=0;
    for(int j=0;j<n;j++){
        y=arr[j];
        cout<<fact(y)<<endl;
    }
}

int main() {
    int x=14197454024290336768;
    cout<<typeid(x).name();
	// your code goes here
	/*int t;
	cin>>t;
	int n[t];

	for(int i=0;i<t;i++){
	    cin>>n[i];
	 }

	 factorial(n,t);*/
}




