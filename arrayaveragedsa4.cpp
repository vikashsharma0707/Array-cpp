#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number :";
	cin>>n;
	
	int arr[n];
	
	int sum=0;
	int avg=0;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	
	cout<<"Sum of nnumber is :"<<sum<<endl;
	avg=sum/n;
	
	cout<<"Average of numbers is :"<<avg;
	
	
	
}
