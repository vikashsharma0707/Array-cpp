#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter numbers";
	cin>>n;
	int sum=0;
	int avg=0;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
	  sum=sum+arr[i];
	}
	cout<<sum;
	
	avg=sum/n;
	cout<<avg;
}
