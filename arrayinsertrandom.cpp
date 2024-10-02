#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number :";
	cin>>n;
	int newele,index;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"enter the new element"<<endl;;
	cin>>newele;
	cout<<"enter the index number"<<endl;
	cin>>index;
	
	for(int i=n;i>index;i--){
		arr[i]=arr[i-1];
	
	}
	 arr[index]=newele;
	cout<<"new array after insertion of the element";
	
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
}
