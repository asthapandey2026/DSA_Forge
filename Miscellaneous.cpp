//wap to sort a string
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string arr="acbd";
	sort(arr.begin(),arr.end());
	cout<<arr;
	return 0;
}

//wap to sort an array
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int arr[]={4,3,8,9,0,1,4,89};
	int n=(sizeof(arr))/(sizeof(arr[0]));    //"sizeof(arr)" gives the size of array in bytes, sizeof(arr[0]) gives the size of single integer. Therefore this division gives the no. of elements in given integer
	
	sort(arr,arr+n);       //arr= start of array, "arr+n"= one past last element(i.e. end of array)
	
	cout<<n<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" , ";
	}
	return 0;
}

//wap to find largest element in array with sorting
#include <iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter elements to find largest: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	int n=(sizeof(arr))/(sizeof(arr[0]));
	sort(arr,arr+n);
	cout<<"\nThe largest element of the array is: "<<arr[n-1];
	return 0;	
}


//wap to find largest element without sorting
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int maxi=INT_MIN;
	int arr[]={8,9,3,5,6,7,2,0,88};
	int n=(sizeof(arr))/(sizeof(arr[0]));
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			maxi=max(maxi,arr[j]);
		}
	}
	cout<<"largest element= "<<maxi;
	return 0;	
}

//wap to find second largest element without sorting
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,7,50,9,3,4,11,40,39};
	int maxi=INT_MIN,res=INT_MIN;
	int n=(sizeof(arr))/(sizeof(arr[0]));
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			res=maxi;
			maxi=arr[i];
		}
		else if(arr[i]>res && arr[i]!=maxi){
			res=arr[i];
		}
	}
	cout<<"2nd largest element= "<<res;
	return 0;
}


//wap to find kth largest element with sorting (Brute Force Approach)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int k,n,arr[]={3,8,9,6,45,678,679};
	n=(sizeof(arr))/(sizeof(arr[0]));
	sort(arr,arr+n);
	cout<<"Enter which largest element to be printed: ";
	cin>>k;
	if(k==1){ cout<<endl<<k<<"st largest element= "<<arr[n-k];}
	else if(k==2){ cout<<endl<<k<<"nd largest element= "<<arr[n-k];}
	else if(k==3){ cout<<endl<<k<<"rd largest element= "<<arr[n-k];}
	else{ cout<<endl<<k<<"th largest element= "<<arr[n-k];}
	return 0;
}

//WAP to find kth largest element with sorting (Optimal Approach)
#include<iostream>
#include<queue>
using namespace std;
int main(){
	int arr[]={5,4,6,3,1,2};
	int n=(sizeof(arr))/(sizeof(arr[0]));
	int k;
	cout<<"Enter which largest element to find: ";
	cin>>k;
	cout<<endl;
	
	if(k>n){
		cout<<"k is greater than the array";
		return 0;
	}
	priority_queue<int, vector<int>, greater<int> > minHeap;
	
	for(int i=0;i<n;i++){
		minHeap.push(arr[i]);
		if (minHeap.size()>k){
			minHeap.pop();
		}
	}
	cout<<k<<"th largest element= "<<minHeap.top();
}

//Pattern
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int k=0;k<i;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//WAP for finding the element with maximum occurance in the array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={3,5,3,6,6,9,7,9,9,4,9,9,9};
	int max_count=1, count=1, result=arr[0];
	int s=(sizeof(arr))/(sizeof(arr[0]));
	sort(arr,arr+s);
	
	for(int i=1;i<s;i++){
		if(arr[i]==(arr[i-1])){
			count++;
		} else { count=1; }
		
		if(max_count<count){
			max_count=count;
			result=arr[i];
		}
	}
	cout<<result;
	return 0;
}

//WAP for palindrome
#include<iostream>
using namespace std;
int main(){
	int num=121, rem,og_num, rev_num=0;
	og_num=num;
	
	while(num>0){
		rem=num%10;
		rev_num=rev_num*10+rem;
		num/=10;
	}
	if(og_num==rev_num){
		cout<<"It is palindrome.";
	}
	return 0;
}

//WAP to find the minimum in the array without sorting
#include<iostream>
using namespace std;
int main(){
	int arr[]={4,7,9,2,54,89,0,6}, mini=INT_MAX;
	int n=(sizeof(arr))/(sizeof(arr[0]));
	for(int i=0;i<n;i++){
		mini=min(mini,arr[i]);
	}
	cout<<mini;
	return 0;
}

//WAP to find the minimum in the array with sorting
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={4,7,9,2,54,89,0,6};
	int n=(sizeof(arr))/(sizeof(arr[0]));
	
	sort(arr,arr+n);
	cout<<arr[0];
	return 0;
}

//WAP for Binary search
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int target=9,arr[]={6,9,4,3,8,2,1,0},mid,low,end;
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	low=0,end=n-1;
	
	while(low<=end){
		mid=(low+end)/2;
		if(arr[mid]==target){
			cout<<"element found at "<<arr[mid];
			return 0;
		}
		else if(target<arr[mid]){
		    end=mid-1;		
		}
		else if(target>arr[mid]){
			low=mid+1;
		}	
	}
	return 0;	
}

//WAP for linear search
#include<iostream>
using namespace std;
int main(){
	int arr[]={5,7,8,98,5,54,34,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=98;
	
	for(int i;i<n;i++){
		if(arr[i]==target){
			cout<<"found element at index "<<i;
		}
	}
	return 0;
}

//WAP to find maximum sum in array
#include<iostream>
using namespace std;
int main(){
	int arr[]={4, -7, 9, -2, 54, -89, 0, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int currentMax=arr[0], maxSum=arr[0];
	
	for(int i=1;i<n;i++){
		currentMax=max(arr[i],currentMax+arr[i]);
		maxSum=max(currentMax, maxSum);
	}
	cout<<endl<<maxSum;
}*/

//Wap for bubble sort
#include<iostream>            // worst/average time complexity= O(n^2)
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
}

//WAP 














