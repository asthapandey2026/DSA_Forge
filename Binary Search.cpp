#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int a){
int low=0,high= n-1;
while(low<=high){
	int mid=(low+high)/2;
	if(arr[mid]==a){
		return mid;
	} else if(arr[mid]<a){
		low=mid+1;
	} else{
		high=mid-1;
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/ sizeof(arr[0]);
	int a=4;
	
	int result=binarysearch(arr,n,a);
	if(result!=-1){
		cout
	}
}
