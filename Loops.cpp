//while loop
/*
//Print numbers 1-5
#include<iostream>
using namespace std;
int main(){
	int a=1;
	while(a<=5){
		cout<<a<<endl;
		a++;
	}
	return 0;
}

// for loop

// sum of numbers from 1 to n
#include<iostream>
using namespace std;
int main(){
	int sum=0,a;
	cout<<"enter number:";
	cin>>a;
	for(int i=1;i<=a;i++){
		sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}


//sum of all odd numbers from 1-n
#include<iostream>
using namespace std;
int main(){
	int sum=0,num;
	cout<<"enter number:";
	cin>>num;
	for(int i=1;i<=num;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;
}
//sum of all odd numbers from 1-n using while loop
#include<iostream>
using namespace std;
int main()
{
	int num, sum=0,a=1;
	cout<<"enter number:";
	cin>>num;
	while(a<=num){
		if(a%2!=0){
			sum+=a;
		}
		a++;
	}
	cout<<sum;
	return 0;
}


//prime or not
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number to check if prime: ";
	cin>>num;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			cout<<"not prime\n";
			return 0;
		}		
	}
	cout<<"prime\n";
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	int i=2;
	while(i<=num/2){
		if(num%i==0){
			cout<<"not prime\n";
			return 0;
		}
		i++;
	}
	cout<<"prime\n";
	return 0;
	
}*/


//Nested Loop

// square matrix of star
#include<iostream>
using namespace std;
int main(){
	int n=10;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}






