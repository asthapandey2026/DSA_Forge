/*
//Wap for bubble sort
#include<iostream>            // worst/average time complexity: O(n^2), Auxiliary Space: O(1)
using namespace std;
int main(){
	int arr[]={9,7,8,6,4,5,3,2,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	bool swapped;
	
	for(int i=0;i<n-1;i++){
		swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped=true;
			}
		}
		if (!swapped){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}*/

//WAP for insertion sort
#include<iostream>
using namespace std;
int main(){
	
}











