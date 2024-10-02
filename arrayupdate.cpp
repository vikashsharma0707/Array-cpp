#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of array";
	cin>>n;
	
	int arr[n];
	int newele,index;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Before updating elemnet "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"Enter the new element"<<endl;
	cin>>newele;
	cout<<"Enter the new index"<<endl;
	cin>>index;
	
	arr[index]=newele;
	cout<<"Array after updating the element"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
	
}
