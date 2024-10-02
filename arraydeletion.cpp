#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number of array";
	cin>>n;
	int index;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"array element before deletion"<<endl;
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
	}
	
	cout<<"/nenter the index number"<<endl;
	cin>>index;
	
	for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	
	cout<<"array element after deletion"<<endl;
	
		for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
	}
}
