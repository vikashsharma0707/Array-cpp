#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter number ";
	cin>>n;
	
	int arr[n];
   
    
    
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	
	 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	 int min =arr[0];
	 for(int i=1;i<=n;i++){
    	if(arr[i]<min){
    		min=arr[i];
		}
	}
	
	cout<<"minimum number is :"<<min;
}
