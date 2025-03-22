// Patterns
/*
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

//right triangle
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}

//inverted right triangle
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=n;i>=1;i--){
		for(int k=i;k>=1;k--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}*/

//triangle
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=i;k++){
			cout<<" ";
		}
		for(int j=n;j>=i;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
	
	
	
	
	



