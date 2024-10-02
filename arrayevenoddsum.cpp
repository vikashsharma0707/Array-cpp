#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter number";
	cin>>n;
	
	int arr[n];
	int  even=0;
	int odd=0;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
	     cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even=even+arr[i];
		}
		
		else{
			odd =odd+arr[i];
		}
	}
	
	cout<<"sum of even sum is :"<<even<<endl;
	cout<<"sum of even odd is :"<<odd;
}
