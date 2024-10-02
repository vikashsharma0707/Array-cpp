#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number ";
	cin>>n;
	int newele;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"enter the newelement";
	cin>>newele;
	
	arr[n]=newele;
	cout<<"New array after insertion";
	
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
	
}
